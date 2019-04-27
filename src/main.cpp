#include <Arduino.h>

int pin = PC13;
int delay_time = 10000;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT); // Declare the LED as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin, HIGH);
  delay(delay_time);
  digitalWrite(pin, LOW);
  delay(delay_time);
}