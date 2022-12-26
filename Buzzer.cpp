#include <Arduino.h>
#include <ezBuzzer.h>

class Buzzer {
  private:
    byte pin;
    ezBuzzer buzzer;

  public:
  Buzzer(byte pin):buzzer(pin) {
    this->pin = pin;
  }
  
  void ring() {
    digitalWrite(this->pin, HIGH); 
  }

  void stopRinging() {
    digitalWrite(this->pin, LOW); 
  }
};