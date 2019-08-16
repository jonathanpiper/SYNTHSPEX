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
station1Parameters = [	'freq', 'amp' ]
station1Blocks = [ 4 ]
station2Parameters = [	'H01', 'H02', 'H03', 'H04', 'H05', 'H06', 'H07', 'H08', 'H09', 'H10', 'H11', 'H12', 'H13', 'H14', 'H15', 'H16' ]
station2Blocks = [ 5, 6, 8, 9 ]
station3Parameters = [	'centerFreq', 'Q', 'filterMix' ]
station3Blocks = [ 10 ]
station4Parameters = [	'attack', 'release' ]
station4Blocks = [ 12 ]
station5Parameters = [	'LFOAmpRate', 'LFOAmpDepth', 'LFOPitchRate', 'LFOPitchDepth' ]
station5Blocks = [ 13 ]
station6Parameters = [	'reverbDecay', 'reverbMix' ]
station6Blocks = [ 14 ]

print('Waiting for RFID/NFC card to write to!')

CARD_KEY = b'\xFF\xFF\xFF\xFF\xFF\xFF'

while True:
    # Check if a card is available to read
    uid = pn532.read_passive_target()
    #print('.', end="")
    # Try again if no card is available.
    if uid is not None:
        break

station = 1
#tmpdict = {}
while station <= 6:		
	stationParameters = eval("station" + str(station) + "Parameters")
	stationBlocks = eval("station" + str(station) + "Blocks")			
	i = 0
	j = 0
	tmpdata = ''
	while i < len(stationBlocks):
		authenticated = pn532.mifare_classic_authenticate_block(uid, stationBlocks[i], PN532.MIFARE_CMD_AUTH_B, CARD_KEY)
		tmpdata += pn532.mifare_classic_read_block(stationBlocks[i]).split('#')[0]
		#print tmpdata
		i += 1
	for param in stationParameters:
		#print param
		parameters[param] = float(tmpdata[j*4:(j+1)*4])
		j += 1
	station += 1

print parameters