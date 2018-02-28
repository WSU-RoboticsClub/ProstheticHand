### Test program for Cyton

import sys; sys.path.append('..') # help python find open_bci_v3.py relative to scripts folder
import open_bci_v3 as bci
import os
import logging
import time

def handle_sample(sample):
  print(sample.channel_data)

board = bci.OpenBCIBoard(port='COM7')
board.print_register_settings()
board.start_streaming(handle_sample)
