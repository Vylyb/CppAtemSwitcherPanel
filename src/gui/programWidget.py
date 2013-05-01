'''
Created on 30.04.2013

@author: Vylyb
'''

from PyQt4.QtCore import *
from PyQt4.QtGui import *

from channelWidget import ChannelWidget

class ProgramWidget(QWidget):

    def __init__(self, gui, label):
        
        QWidget.__init__(self)
        
        self.gui = gui
        
        layout = QVBoxLayout()
        layout.setAlignment(Qt.AlignCenter)
        layout.addWidget(QLabel(label))
        
        self.channelLabel = QLabel("")
        self.channelLabel.setFont(QFont("Verdana", 100, 1, False))
        layout.addWidget(self.channelLabel)
        
        self.setLayout(layout)
        
        self.channel = None
        
        
    def updateChannel(self):
        if self.channel == None:
            self.channelLabel.setText("")
        else:
            self.channelLabel.setText(str(self.channel.getIndex()))
        
        
    def setChannel(self, widget):
        self.channel = widget
        self.updateChannel()
