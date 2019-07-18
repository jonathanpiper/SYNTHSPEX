import binascii
import sys
import struct
import zlib

import Adafruit_PN532 as PN532

frequency = 440.589
amplitude = 0.123
h1 = 0.987

try:
    input = raw_input
except NameError:
    pass

CS   = 12
MOSI = 16
MISO = 18
SCLK = 22

CARD_KEY = [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF]

pn532 = PN532.PN532(cs=CS, sclk=SCLK, mosi=MOSI, miso=MISO)

pn532.begin()

uid = pn532.read_passive_target()
while uid is None:
    uid = pn532.read_passive_target()
# Next build the data to write to the card.
# Format is as follows:
# - Bytes 0-3 are a header with ASCII value 'MCPI'
# - Byte 4 is the block ID byte
# - Byte 5 is 0 if block has no subtype or 1 if block has a subtype
# - Byte 6 is the subtype byte (optional, only if byte 5 is 1)
#print len(data)
#for x in range (0, len(data)):
    #print str(x % 3).encode()
#    data += str(x % 3).encode()
#print data[0:16]
#    print data
#parameters = str(frequency) + "#" + str(amplitude)
#data[0:len(parameters)] = parameters
'''
writedata = data[:16]
if not pn532.mifare_classic_authenticate_block(uid, 4, PN532.MIFARE_CMD_AUTH_B,
                                               CARD_KEY):
    print ('could no auth')
if not pn532.mifare_classic_write_block(4, writedata):
    print('Error! Failed to write to the card.')
'''
parameters = '76.17#4#0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000'
offset = 0
for i in xrange (0,4):
    for j in xrange (0,3):
        #startbit = (i*4)+(j*16)
        writedata = str(parameters).encode()[offset:offset+16]
        #print writedata
        block = ((i+1)*4) + j
        #print block
        if not pn532.mifare_classic_authenticate_block(uid, block, PN532.MIFARE_CMD_AUTH_B,
                                            CARD_KEY):
            print ('could no auth')
        if not pn532.mifare_classic_write_block(block, writedata):
            print('Error! Failed to write to the card.')
        offset += 16