import serial
import autopy
import time
arduino = serial.Serial("COM5", 9600)
time.sleep(3)
while True:
    if arduino.read()=='Y':
       autopy.mouse.toggle(False,1)
       autopy.mouse.move(700,505) 
       autopy.mouse.toggle(True,1)
       #autopy.mouse.click(1)
       time.sleep(0.1)
       autopy.mouse.toggle(False,1)
    #if arduino.read()=='N':
     #  arduino.close()
