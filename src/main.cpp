#include <Arduino.h>

// O LED integrado da ESP32-C3 SuperMini fica no GPIO 8
#define LED_PIN 8

void setup() {
  // Configura o pino do LED como saída
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, LOW);  // Liga o LED (Lógica invertida)
  delay(500);                  // Aguarda meio segundo
  
  digitalWrite(LED_PIN, HIGH); // Desliga o LED
  delay(500);                  // Aguarda meio segundo
}
