#!/usr/bin/env python2.7 
# -*- coding: utf-8 -*-
# vim: tabstop=8 expandtab shiftwidth=4 softtabstop=4

import socket
import string
import struct
import sys

def toHex(val):
    h = hex(val)[2:]
    
    if(val < 16):
        h = "0" + h
        
    return h


def dumpHex (buf) :
    s = ''
    m = 2  # alle m bytes ein leerzeichen
    n = 0
    for c in buf:
        s += toHex(ord(c))
        n += 1
        if(m == n):
            s += ' '
            n = 0

    print s


def dumpAscii (buf) :
    s = ''
    for c in buf:
        if (ord(c) >= 0x20)and(ord(c) <= 0x7F):
            s += c
        else:
            s += '.'
    print s


# implements communication with atem switcher
class AtemController :

    # size of header data
    SIZE_OF_HEADER = 0x0c

    # packet types
    CMD_NOCOMMAND = 0x00
    CMD_ACKREQUEST = 0x01
    CMD_HELLOPACKET = 0x02
    CMD_RESEND = 0x04
    CMD_UNDEFINED = 0x08
    CMD_ACK = 0x10


    # initializes the class
    def __init__ (self) :
        self.socket = socket.socket (socket.AF_INET, socket.SOCK_DGRAM)
        self.socket.setsockopt (socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        self.socket.setblocking (0)
        self.socket.bind(('0.0.0.0', 9910))
    
    # hello packet
    def connectToSwitcher (self, address) :
        self.address = address
        self.packetCounter = 0
        self.isInitialized = False
        self.currentUid = 0x1337
        
        datagram = self.createCommandHeader (self.CMD_HELLOPACKET, 8, self.currentUid, 0x0)
        datagram += struct.pack('!I', 0x01000000)
        datagram += struct.pack('!I', 0x00)
        self.sendDatagram (datagram)


    # reads packets sent by the switcher
    def handleSocketData (self) :
        # network is 100Mbit/s max, MTU is thus at most 1500
        try :
            d = self.socket.recvfrom (2048)
        except socket.error:
            return False
        datagram, server = d
        print 'received datagram'
        header = self.parseCommandHeader(datagram)
        if header :
            self.currentUid = header['uid']
            
            if header['bitmask'] & self.CMD_HELLOPACKET :
                print 'not initialized, received HELLOPACKET, sending ACK packet'
                self.isInitialized = False
                ackDatagram = self.createCommandHeader (self.CMD_ACK, 0, header['uid'], 0x0)
                self.sendDatagram (ackDatagram)
            elif self.isInitialized and (header['bitmask'] & self.CMD_ACKREQUEST) :
                print 'initialized, received ACKREQUEST, sending ACK packet'
                ackDatagram = self.createCommandHeader (self.CMD_ACK, 0, header['uid'], header['packageId'])
                self.sendDatagram (ackDatagram)
            
            if ((len(datagram) > (self.SIZE_OF_HEADER + 2)) and (not (header['bitmask'] & self.CMD_HELLOPACKET))) :
                self.parsePayload (datagram)

        return True        


    def waitForPacket(self):
        print ">>> waiting for packet"
        while (not self.handleSocketData()) :
            pass
        print ">>> packet obtained"


    # generates packet header data
    def createCommandHeader (self, bitmask, payloadSize, uid, ackId) :
        buf = ''
        packageId = 0

        if (not (bitmask & (self.CMD_HELLOPACKET | self.CMD_ACK))) :
            self.packetCounter += 1
            packageId = self.packetCounter
    
        val = bitmask << 11
        val |= (payloadSize + self.SIZE_OF_HEADER)
        buf += struct.pack('!H', val)
        buf += struct.pack('!H', uid)
        buf += struct.pack('!H', ackId)
        buf += struct.pack('!I', 0)
        buf += struct.pack('!H', packageId)
        return buf


    # parses the packet header
    def parseCommandHeader (self, datagram) :
        header = {}

        if (len(datagram) >= self.SIZE_OF_HEADER) :
            header['bitmask'] = struct.unpack('B', datagram[0])[0] >> 3
            header['size'] = struct.unpack('!H', datagram[0:2])[0] & 0x07FF
            header['uid'] = struct.unpack('!H', datagram[2:4])[0]
            header['ackId'] = struct.unpack('!H', datagram[4:6])[0]
            header['packageId'] = struct.unpack('!H', datagram[10:12])[0]
            print header
            return header
        return False


    def parsePayload (self, datagram) :
        print 'parsing payload'
        # eat up header
        datagram = datagram[self.SIZE_OF_HEADER:]
        # handle data
        while (len(datagram) > 0) :
            size = struct.unpack('!H', datagram[0:2])[0]
            packet = datagram[0:size]
            datagram = datagram[size:]
            # skip size and 2 unknown bytes
            packet = packet[4:]
            ptype = packet[:4]
            payload = packet[4:]
            # find the approporiate function in the class
            method = 'pkt' + ptype    
            if method in dir(self) :
                func = getattr(self, method)
                if callable(func) :
                    print method
                    func(payload)
                else:
                    print 'problem, member ' + method + ' not callable'
            else :
                print 'unknown type ' + ptype


    def sendCommand (self, command, payload) :
        size = len(command) + len(payload) + 4
        dg = self.createCommandHeader (self.CMD_ACKREQUEST, size, self.currentUid, 0)
        dg += struct.pack('!H', size)
        dg += "\x00\x00"
        dg += command
        dg += payload 
        self.sendDatagram (dg)


    # sends a datagram to the switcher
    def sendDatagram (self, datagram) :
        print 'sending packet'
        dumpHex(datagram)
        self.socket.sendto (datagram, self.address)


    # handling of subpackets
    
    def pkt_ver (self, data) :
        major, minor = struct.unpack('!HH', data)
        self.version = str(major) + '.' + str(minor)
        print 'version ' + self.version

    def pkt_pin (self, data) :
        self.productInformation = data

    def pkt_top (self, data) :
        pass

    def pkt_MeC (self, data) :        
        pass

    def pkt_mpl (self, data) :
        pass

    def pkt_MvC (self, data) :
        pass         
    
    def pkt_AMC (self, data) :
        pass

    def pktPowr (self, data) :
        pass

    def pktVidM (self, data) :
        dumpHex (data)
        dumpAscii (data)
        self.videoFormat = data

    def pktInPr (self, data) :
        dumpHex (data)
        dumpAscii (data)
        input = {}
        input['index'] = struct.unpack('B', data[0])[0]
        pos = data[1:].find('\0')
        if (pos == -1) :
            print 'can\'t find \'\\x0\''
        input['longText'] = data[1:pos + 1]
        input['shortText'] = data[21:27]
        print input


    def buildPayload(self, buf):
        payload = ""

        for i in range(len(buf)):
            payload += struct.pack('!B', buf[i])

        return payload
        
        
    def changeProgramInput(self, index) :
        self.sendCommand ("CPgI", self.buildPayload([0, index, 0, 0]))

 
    def changePreviewInput(self, index) :
        print 'Change Program Input'
        self.sendCommand ("CPvI", self.buildPayload([0, index, 0, 0]))

