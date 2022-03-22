#include <Arduino.h>

const int  LED = 2;
void setup() {
  pinMode(LED, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
  // put your main code here, to run repeatedly:
}