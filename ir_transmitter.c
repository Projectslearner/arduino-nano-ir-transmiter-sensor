/*
    Project name : IR Transmiter Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-ir-transmiter-sensor
*/

#include <IRremote.h>

// Define the pin for the IR transmitter
const int IR_LED_PIN = 3;

IRsend irsend;

void setup() 
{
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    if (command == '1') {
      sendSonyCode(0xa90, 12); // Example Sony IR code
      Serial.println("Sent IR code for command 1");
    } else if (command == '2') {
      sendSonyCode(0xb90, 12); // Example Sony IR code
      Serial.println("Sent IR code for command 2");
    }
    delay(500); // Small delay to prevent spamming
  }
}

void sendSonyCode(unsigned long data, int nbits) {
  irsend.sendSony(data, nbits);
}
