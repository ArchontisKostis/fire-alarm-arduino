#include "HardwareSerial.h"
#include <Arduino.h>

class FlameSensor {
  private:
    byte pin;
    int reading;
    int sensitivity = 1022;

  public:
    FlameSensor(byte pin) {
      this->pin = pin;
    }

    void update() {
      this->reading = analogRead(pin);
    }

    bool fireDetected() {   
      update();   
      if(reading < sensitivity)
        return true;
      return false;
    } 

    void showReading() {
      Serial.println(this->reading);
    }

    void setSensitivity(int sensitivity) {
      this->sensitivity = sensitivity;
    }
};