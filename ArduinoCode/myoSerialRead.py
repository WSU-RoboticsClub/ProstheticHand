### read serial data from myo sensor

import serial

ser = serial.Serial('COM5', 9600)

string = ''
x = 0

while x == 0:
    Value = ser.read()
    if Value != 'x':
        string += Value
    else:
        #if int(string) > 200:
        #    print 'closed?'
        #else:
        #    print 'open'
        print string
        string = ''

ser.close()
