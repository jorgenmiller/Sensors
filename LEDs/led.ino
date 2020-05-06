/*
Jorgen Miller
May 6, 2020

Blinks an LED.
Digital pin 9 -> LED -> 220 ohm resistor -> GND
*/

//define where LED is connected
#define led_pin 9 //replaces 'led_pin' with '9' in the code when compiled

//set a wait time (in milliseconds) between on and off
#define wait_ms 200 //replaces 'wait_ms' with '200' when compiled

void setup() { //run  once

  //allow the LED pin to be controlled in the code
  pinMode(led_pin, OUTPUT); //switch pin to low impedence so it can provide current
}

void loop() { //continuously loop over contained code

  //turn LED on and off, with a delay between both states

  digitalWrite(led_pin, HIGH); //provide current on the LED pin
  delay(wait_ms); //pause for time 'wait_ms', measured in milliseconds

  digitalWrite(led_pin, LOW); //stop providing current on the LED pin
  delay(wait_ms); //pause again
}
