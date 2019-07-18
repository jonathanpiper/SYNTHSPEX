import execnet
import time

def call_python_version(Version, Module, Function, ArgumentList=[]):
    gw      = execnet.makegateway("popen//python=python%s" % Version)
    channel = gw.remote_exec("""
        from %s import %s as the_function
        channel.send(the_function(*channel.receive()))
    """ % (Module, Function))
    channel.send(ArgumentList)
    return channel.receive()

print("about to call pd")
butt = call_python_version("2.7", "pdengine", "hey", ["hey"])
print(butt)
print(1)
call_python_version("2.7", "pdengine", "init")

while True:
    print("trying to play a note!")
    call_python_version("2.7", "pdengine", "pdEngineBang", ["pyin_play_note"])
    #call_python_version("2.7", "pdengine", "pdEngineBang", ["pyin_play_note"])
    time.sleep(1)