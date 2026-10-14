#include <Arduino.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println("Rastreador ESP32-C3 Online!");
  delay(1000);
}
