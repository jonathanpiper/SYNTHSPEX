import eel
import sounddevice as sd
import numpy as np
from pylibpd import *
import mysql.connector as mdb
import json
import threading
from time import sleep

class dbConn(object):
    def __init__(self):
        self.cnx = mdb.connect(user='ns-pi-synth', password='synthspex', host='192.168.20.84', database='SYNTH')
        self.cursor = self.cnx.cursor()
        self.queryInsert = "INSERT INTO synth_patches (code, patch) VALUES (%s, %s)"
        self.queryUpdate = "UPDATE synth_patches SET patch = %s WHERE code = %s"
        
        thread = threading.Thread(target=self.run, args=())
        thread.daemon = True
        thread.start()

    def run(self):
        while True:
            sleep(1)

    def initSave(self, queryData):
        print(self.cursor.execute(self.queryInsert, queryData))
        self.cnx.commit()
        
    def contSave(self, queryData):
        print(self.cursor.execute(self.queryUpdate, queryData))
        self.cnx.commit()
        
db = dbConn();

identifierCode = "0000"

eel.init('web')

device = 0
start_idx = 0
samplerate = sd.query_devices(device, 'output')['default_samplerate']

constParameters = {
    'freq' : 0.00,
    'amp' : 0.50,
    'H01' : 1.00,
    'H02' : 0.60,
    'H03' : 0.00,
    'H04' : 0.00,
    'H05' : 0.00,
    'H06' : 0.00,
    'H07' : 0.00,
    'H08' : 0.00,
    'centerFreq' : 0.50,
    'Q' : 0.00,
    'filterMix' : 0.00,
    'attack' : 0.00,
    'release' : 0.00,
    'LFOAmpRate' : 0.00,
    'LFOAmpDepth' : 0.00,
    'LFOPitchRate' : 0.00,
    'LFOPitchDepth' : 0.00,
    'reverbDecay' : 0.00,    
    'reverbMix' : 0.00,
}

parameters = {}
parameters.update(constParameters)

def pd_callback(outdata, frames, time, status):
    outp = m.process(data)
    t = np.frombuffer(outp, dtype='int16')
    t = t.reshape(-1, 1)
    outdata[:] = t
    
def pdin(*s):
    global parameters
    print("pd just said that {0} is {1}".format(s[0], s[1]))
    parameters[s[0]] = s[1]
    
libpd_set_float_callback(pdin)
libpd_set_symbol_callback(pdin)
m = PdManager(0, 1, 44100, 1)
libpd_open_patch('se.pd', './')
data = np.arange(64)

for parameter in parameters:
    libpd_float(parameter, parameters[parameter])

@eel.expose
def printorama(a):
    print(a)
    
@eel.expose
def pd_bang(bang):
    libpd_bang(bang)
    print('i am banged')

@eel.expose
def pd_float(control, value):
    global parameters
    parameters[control] = "{:.2f}".format(value)
    print(libpd_float(str(control), float(value)))

@eel.expose
def getParamValue(param):
    #print(param, parameters[param])
    return parameters[param]

@eel.expose
def initSettings(code):
    parameterDump = json.dumps(parameters)
    queryData = (code, parameterDump)
    db.initSave(queryData)
    
@eel.expose
def saveSettings(code):
    print(code)
    parameterDump = json.dumps(parameters)
    queryData = (parameterDump, code)
    db.contSave(queryData)
    
@eel.expose
def resetSettings():
    parameters.update(constParameters)
    for parameter in parameters:
        print(parameter, parameters[parameter])
        libpd_float(parameter, parameters[parameter])

with sd.OutputStream(device=device, dtype='int16', channels=1, callback=pd_callback, samplerate=samplerate, blocksize=64):
    eel.start('main.html', cmdline_args=['--start-fullscreen'])
