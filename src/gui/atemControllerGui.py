'''
Created on 30.04.2013

@author: Vylyb
'''

from PyQt4.QtCore import *
from PyQt4.QtGui import *

from channelWidget import ChannelWidget
from programWidget import ProgramWidget
from backend.atemController import AtemController
from menuBar import MenuBar

class AtemControllerGui(QWidget):
    
    def __init__(self):
        
        QWidget.__init__(self)
        
        self.setGeometry(QRect(10, 30, 800, 600))
        
        self.controller = AtemController()
        self.controller.connectToSwitcher(('192.168.1.35', 9910))
        
        self.channels = []
        for n in range(8):
            self.channels.append(ChannelWidget(n + 1, self))
            
        print len(self.channels), "Channels"

        layout = QVBoxLayout()
        layout.setContentsMargins(0, 0, 0, 0)
        
        centerLayout=QHBoxLayout()
        centerLayout.setContentsMargins(0, 0, 0, 0)
        centerWidget=QWidget()
        centerWidget.setLayout(centerLayout)

        controlLayout=QVBoxLayout()
        controlLayout.setContentsMargins(0, 0, 0, 0)
        controlWidget=QWidget()
        controlWidget.setLayout(controlLayout)
        
        centerLayout.addWidget(controlWidget)
        
        menuWidget=QWidget()
        menuLayout=QHBoxLayout()
        menuLayout.setContentsMargins(0, 0, 0, 0)
        menuWidget.setLayout(menuLayout)
        menuWidget.setFixedHeight(20)
        self.menubar=MenuBar(self)
        menuLayout.addWidget(self.menubar)
        
        self.previewWidget = ProgramWidget(self, "Preview")
        self.programWidget = ProgramWidget(self, "Program")
            
        row1layout = QHBoxLayout()
        row1 = QWidget()
        row1.setLayout(row1layout)
        
        row1layout.addWidget(self.previewWidget)
        row1layout.addWidget(self.programWidget)

        row2layout = QHBoxLayout()
        row2 = QWidget()
        row2.setLayout(row2layout)
        
        row3layout = QHBoxLayout()
        row3 = QWidget()
        row3.setLayout(row3layout)
        
        n = 0
        for c in self.channels:
            if n < 4:
                row2layout.addWidget(c)
            else:
                row3layout.addWidget(c)
            n += 1

        controlLayout.addWidget(row1)
        controlLayout.addWidget(row2)
        controlLayout.addWidget(row3)
        
        rightWidget=QWidget()
        rightLayout=QVBoxLayout()
        rightWidget.setLayout(rightLayout)
        
        systemCallWidget=QWidget()
        systemCallWidget.setFixedWidth(200)
        systemCallLayout=QVBoxLayout()
        systemCallWidget.setLayout(systemCallLayout)
        
        rightLayout.addWidget(systemCallWidget)
        
        centerLayout.addWidget(rightWidget)
        
        layout.addWidget(menuWidget)
        layout.addWidget(centerWidget)
        self.setLayout(layout)
        
        self.activeProgram = -1
        self.activePreview = -1

        
        
    def setAsProgram(self, index):
        if not index == self.activeProgram:
            self.programWidget.setChannel(self.channels[index - 1])
            self.resetOtherPrograms(index - 1)
            self.controller.changeProgramInput(index)
            self.activeProgram = index
        
        
    def setAsPreview(self, index):
        if not index == self.activePreview:
            self.previewWidget.setChannel(self.channels[index - 1])
            self.resetOtherPreviews(index - 1)
            self.controller.changePreviewInput(index)
            self.activePreview = index


    def resetOtherPrograms(self, index):
        for i in range(len(self.channels)):
            if not i == index:
                self.channels[i].resetProgramButton()
                
    def resetOtherPreviews(self, index):
        for i in range(len(self.channels)):
            if not i == index:
                self.channels[i].resetPreviewButton()
