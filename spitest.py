import Adafruit_PN532 as PN532
from mpmath import *
import time


# I2C connection:
#i2c = busio.I2C(board.SCL, board.SDA)

# Non-hardware reset/request with I2C
#pn532 = PN532_I2C(i2c, debug=False)

# With I2C, we recommend connecting RSTPD_N (reset) to a digital pin for manual
# harware reset
#reset_pin = DigitalInOut(board.D6)
# On Raspberry Pi, you must also connect a pin to P32 "H_Request" for hardware
# wakeup! this means we don't need to do the I2C clock-stretch thing
#req_pin = DigitalInOut(board.D12)
#pn532 = PN532_I2C(i2c, debug=False, reset=reset_pin, req=req_pin)

# SPI connection:
pn532 = PN532.PN532(24, 23, 19, 21)
pn532.begin()
pn532.SAM_configuration()

# UART connection
#uart = busio.UART(board.TX, board.RX, baudrate=115200, timeout=100)

parameters = {
	'freq' : 1.00,
	'amp' : 1.00,
	'H01' : 1.00,
	'H02' : 0.60,
	'H03' : 0.00,
	'H04' : 0.00,
	'H05' : 0.00,
	'H06' : 0.00,
	'H07' : 0.00,
	'H08' : 0.00,
	'H09' : 0.00,
	'H10' : 0.00,
	'H11' : 0.00,
	'H12' : 0.00,
	'H13' : 0.00,
	'H14' : 0.00,
	'H15' : 0.00,
	'H16' : 0.00,
	'centerFreq' : 0.00,
	'Q' : 0.00,
	'filterMix' : 0.00,
	'attack' : 0.00,
	'sustain' : 0.00,
	'release' : 0.00,
	'LFOAmpRate' : 0.00,
	'LFOAmpDepth' : 0.00,
	'LFOPitchRate' : 0.00,
	'LFOPitchDepth' : 0.00,
	'reverbDecay' : 0.00,
	'reverbMix' : 0.00,
}
sortedParameterKeys = sorted(parameters, key=str.lower)

print('Waiting for RFID/NFC card to write to!')

key = b'\xFF\xFF\xFF\xFF\xFF\xFF'

while True:
    # Check if a card is available to read
    uid = pn532.read_passive_target()
    #print('.', end="")
    # Try again if no card is available.
    if uid is not None:
        break

i = 0
for param in sortedParameterKeys:
    sector = int(floor(i/3))
    block = i % 3
    computedblock = ((sector+1)*4) + block
    authenticated = pn532.mifare_classic_authenticate_block(uid, computedblock, PN532.MIFARE_CMD_AUTH_B, key)
    tmpdata = pn532.mifare_classic_read_block(computedblock)
    if tmpdata is None:
        print(('Failed to read block {0}!'.format(computedblock)))
        break
    else:
		print tmpdata
		i += 1
        #parameters[param] = tmpdata[:tmpdata.find(b"#")]
    #print(int(round(time.time() * 1000)))

print(parameters)