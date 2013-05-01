'''
Created on 30.04.2013

@author: Vylyb
'''

import sys
from PyQt4.QtGui import QApplication

from gui.atemControllerGui import AtemControllerGui
  
if __name__ == '__main__':
    
    app = QApplication(sys.argv)
    
    gui = AtemControllerGui()
    gui.show()
    
    sys.exit(app.exec_())
