import binascii
import sys
import struct
import mpmath

import Adafruit_PN532 as PN532

CS   = 12
MOSI = 16
MISO = 18
SCLK = 22

pn532 = PN532.PN532(cs=CS, sclk=SCLK, mosi=MOSI, miso=MISO)

pn532.begin()

parameters = {
	'H1' : 1.00,
	'H2' : 1.00,
	'H3' : 1.00,
	'H4' : 1.00,
	'H5' : 1.00,
	'H6' : 1.00,
	'H7' : 1.00,
	'H8' : 1.00,
	'H9' : 1.00,
	'H10' : 1.00,
	'H11' : 1.00,
	'H12' : 1.00,
	'H13' : 1.00,
	'H14' : 1.00,
	'H15' : 1.00,
	'H16' : 1.01,
	'centerFreq' : 1.00,
	'Q' : 1.00,
	'filterMix' : 1.00,
	'attack' : 1.00,
	'sustain' : 1.00,
	'release' : 1.00,
	'LFOAmpRate' : 1.00,
	'LFOAmpDepth' : 1.00,
	'LFOPitchRate' : 1.00,
	'LFOPitchDepth' : 1.00,
	'reverbDecay' : 1.00,
	'reverbMix' : 1.01,
}
'''
pparameters = base64.b64encode(cPickle.dumps(parameters)).ljust(672,'#')
print pparameters
unp = cPickle.loads(base64.b64decode(pparameters))
print unp
'''

i = 0
j = 0

sortedParameterKeys = sorted(parameters)
#print sortedParameterKeys



ic, ver, rev, support = pn532.get_firmware_version()
#print('Found PN532 with firmware version: {0}.{1}'.format(ver, rev))

pn532.SAM_configuration()
CARD_KEY = [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF]

uid = pn532.read_passive_target()
while uid is None:
    uid = pn532.read_passive_target()
'''
print uid
i = 0
for key in sortedParameterKeys:
    sector = int(mpmath.floor(i/3))
    block = i % 3
    computedblock = ((sector+1)*4) + block
    writedata = str(parameters[key]).ljust(16,'#').encode()
    print("Block {0} gets key {1} and value {2}".format(computedblock, key, writedata))
    if not pn532.mifare_classic_authenticate_block(uid, computedblock, PN532.MIFARE_CMD_AUTH_B,
                                        CARD_KEY):
        print ('could no auth')
    if not pn532.mifare_classic_write_block(computedblock, writedata):
        print('Error! Failed to write to the card.')
    i += 1
'''
'''
while True:
    # Check if a card is available to read.
    uid = pn532.read_passive_target()
    # Try again if no card is available.
    if uid is None:
        continue
    print('Found card with UID: 0x{0}'.format(binascii.hexlify(uid)))
    # Authenticate block 4 for reading with default key (0xFFFFFFFFFFFF).
    #if not pn532.mifare_classic_authenticate_block(uid, 4, PN532.MIFARE_CMD_AUTH_B,
    #                                               [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF]):
    #    print('Failed to authenticate block 4!')
    #    continue
    data = ''
    for i in range (1,5):
        for j in range (0,3):
            block = (i*4)+j
            pn532.mifare_classic_authenticate_block(uid, block, PN532.MIFARE_CMD_AUTH_B,
                                                   [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF])
            data += pn532.mifare_classic_read_block(block)
            pn532.mifare_classic_read_block(block)
            if data is None:
                print('Failed to read block ',block,'!')
    print data
    # Read block 4 data.
#    data = pn532.mifare_classic_read_block(4)
#    if data is None:
#        print('Failed to read block 4!')
#        continue
#    parameters = data.decode("utf-8") 
    #print parameters
#    frequency = parameters.split('#')[0]
#    print frequency
#    amplitude = parameters.split('#')[1]
#    print amplitude
#    print('Read block 4: 0x{0}'.format(binascii.hexlify(data[:4])))
'''
i = 0
for key in sortedParameterKeys:
    sector = int(mpmath.floor(i/3))
    block = i % 3
    computedblock = ((sector+1)*4) + block
    pn532.mifare_classic_authenticate_block(uid, computedblock, PN532.MIFARE_CMD_AUTH_B, CARD_KEY)
    tmpdata = str(pn532.mifare_classic_read_block(computedblock))
    if tmpdata is None:
        print('Failed to read block ',block,'!')
    else:
        parameters[key] = tmpdata[:tmpdata.find("#")]
    i += 1

print parameters