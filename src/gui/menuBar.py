'''
Created on 30.04.2013

@author: Vylyb
'''

from PyQt4.QtGui import *
from PyQt4.QtCore import *

class MenuBar(QMenuBar):

    def __init__(self,gui):
        
        QMenuBar.__init__(self)
        
        self.gui=gui

        