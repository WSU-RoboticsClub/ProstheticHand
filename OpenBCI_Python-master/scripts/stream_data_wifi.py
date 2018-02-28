import sys; sys.path.append('..') # help python find open_bci_v3.py relative to scripts folder
import open_bci_wifi as bci
import logging


def printData(sample):
    print sample


if __name__ == '__main__':
    shield_name = 'OpenBCI-E2B6'
    logging.basicConfig(filename="test.log",format='%(asctime)s - %(levelname)s : %(message)s',level=logging.DEBUG)
    logging.info('---------LOG START-------------')
    shield = bci.OpenBCIWifi(shield_name=shield_name, log=True)
    print("WiFi Shield Instantiated")
    shield.start_streaming(printData)

    shield.loop()
