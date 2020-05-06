/*
Jorgen Miller
May 6, 2020

Sends "Hello World!" over serial output (USB). View it with Arduino IDE's serial monitor.
*/

//define message to be sent
#define message "Hello World!" //replaces 'message' with '"Hello World!"' when compiled

void setup() { //run once

  //setup serial connection at 9600 baudrate
  Serial.begin(9600);

  //send message over serial
  Serial.println(message);
}

void loop() {} //nothing to be looped
