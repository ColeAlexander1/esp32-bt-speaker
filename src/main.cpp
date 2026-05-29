#include <Arduino.h>

const int LED_PIN = 2; // Built-in LED on many ESP32 boards

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_PIN, LOW); // LED on
    delay(500);

    digitalWrite(LED_PIN, LOW);  // LED off
    delay(500);
}