import time
import serial
from espeak import espeak
from gpiozero import Button
prev = Button(3)
pause = Button(4)
ser = serial.Serial("/dev/ttyUSB0", 9600)
espeak.set_parameter(espeak.Parameter.Rate, 100)
time.sleep(2)

myfile = open("/home/pi/mysample.txt" , "r")
data = ""
lines = myfile.readlines()
ser.write('%')
for line in lines:
    data = data + line.strip();

for words in lines:
    successful = False
    while not successful:
        for letters in words:
            if (prev.is_pressed == True):
                print('Pressed')
                time.sleep(0.25)
                continue
            if (letters==" "):
                ser.write('%')
                time.sleep(0.8)
                continue
            if (letters=="0" or letters=="1" or letters=="2" or letters=="3" or letters=="4" or letters=="5" or letters=="6" or letters=="7" or letters=="8" or letters=="9"):
                print(letters)
                ser.write(letters)
                time.sleep(2)
                ser.write('%')
                time.sleep(0.8)
            else:
                print(letters)
                ser.write(letters)
                time.sleep(1.0)
                ser.write('%')
                time.sleep(0.80)
        successful = True
                
                
ser.write('%')
        
