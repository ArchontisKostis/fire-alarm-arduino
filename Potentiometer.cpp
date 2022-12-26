#include "HardwareSerial.h"
#include <Arduino.h>

class Potentiometer {
  private:
    byte pin;
    int value;
  
  public:
    Potentiometer(byte pin) {
      this->pin = pin;
    }

    void update() {
      this->value = analogRead(pin);
    }

    int getValue() {
      update();
      return this->value;
    }

    void printInfo() {
      Serial.println(value);
    }
};