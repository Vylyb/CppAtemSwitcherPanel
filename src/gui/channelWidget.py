'''
Created on 30.04.2013

@author: Vylyb
'''

from PyQt4.QtCore import *
from PyQt4.QtGui import *

class ChannelWidget(QWidget):

    def __init__(self, index, gui):
        
        QWidget.__init__(self)
        
        self.gui = gui
        
        self.styleGray = 'QPushButton{background-color: rgba(200, 200, 200);}'
        self.styleRed = 'QPushButton{background-color: rgba(255, 0, 0);}'
        self.styleGreen = 'QPushButton{background-color: rgba(0, 255, 0);}'

        self.index = index
        self.active = False
        
        layout = QVBoxLayout()
        layout.setAlignment(Qt.AlignCenter | Qt.AlignVCenter)
        label = QLabel("CH " + str(index))
        label.setFont(QFont("Verdana", 20, 1, False))
        layout.addWidget(label)
        
        self.programButton = QPushButton()
        self.programButton.setText("Program")
        self.programButton.clicked.connect(self.setAsProgram)
        self.programButton.setFont(QFont("Verdana", 12, 1, False))
        self.programButton.setStyleSheet(self.styleGray)
        layout.addWidget(self.programButton)
        
        self.previewButton = QPushButton()
        self.previewButton.setText("Preview")
        self.previewButton.clicked.connect(self.setAsPreview)
        self.previewButton.setFont(QFont("Verdana", 12, 1, False))
        self.previewButton.setStyleSheet(self.styleGray)
        layout.addWidget(self.previewButton)
        
        self.setLayout(layout)
        
        
    def getIndex(self):
        return self.index
        
        
    def __str__(self):
        return "Channel " + str(self.index)
        
        
    def setAsProgram(self):
        self.gui.setAsProgram(self.index)
        self.programButton.setStyleSheet(self.styleRed)
        
        
    def setAsPreview(self):
        self.gui.setAsPreview(self.index)
        self.previewButton.setStyleSheet(self.styleGreen)
        
        
    def resetPreviewButton(self):
        self.previewButton.setStyleSheet(self.styleGray)
        
        
    def resetProgramButton(self):
        self.programButton.setStyleSheet(self.styleGray)
        
        
    def setActive(self, active):
        self.active = active
