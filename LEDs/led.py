#Jorgen Miller
#May 6, 2020
#
#Blinks and LED.
#pin 18 -> LED -> 220 ohm resistor -> GND

import RPi.GPIO as GPIO
import time

#LED pin
led_pin = 18

#delay time between on and off states
wait_s = .2

#set pin numering mode (either BOARD or BCM)
GPIO.setmode(GPIO.BCM)

#don't warn about pins that are already setup
GPIO.setwarnings(False)

#set pin 18 as output
GPIO.setup(18, GPIO.OUT)

while True:
    #turn LED on and off, with a delay between both states
    GPIO.output(18, GPIO.HIGH) #provide current to LED
    time.sleep(wait_s) #pause for time 'wait_s', measured in seconds
    GPIO.output(18, GPIO.LOW) #stop current to LED
    time.sleep(wait_s) #pause again
