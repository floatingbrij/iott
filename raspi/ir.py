import RPi.GPIO as GPIO
from time import sleep
ledpin=3
ir=4
GPIO.setmode(GPIO.board)
GPIO.setup(ledpin,GPIO.OUT)
GPIO.setup(ir,GPIO.IN)
GPIO.setwarnings(False)

while(1):
    if(GPIO.input(ir)):
        GPIO.output(ledpin,1)
    else:
        GPIO.output(ledpin,0)
