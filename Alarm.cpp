#include <Arduino.h>
#include "Buzzer.cpp"
#include "Led.cpp"

class Alarm {
  private:
    Buzzer buzzer;
    Led redLed;
    Led blueLed;

  public:
    Alarm(byte buzzerPin, byte redLedPin, byte blueLedPin)
      :buzzer(buzzerPin),
       redLed(redLedPin),
       blueLed(blueLedPin){}

    void setOnAlarm() {
      buzzer.ring();
      redLed.on();
      blueLed.off();      
    }

    void setOffAlarm() {
      buzzer.stopRinging();
      redLed.off();
      blueLed.on();      
    }
};