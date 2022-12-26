#include "FlameSensor.cpp"
#include "Led.cpp"
#include "Buzzer.cpp"
#include "Potentiometer.cpp"
#include "Button.cpp"
#include "SevSeg.h"

SevSeg sevseg;  
FlameSensor flameSensor(A1);
Led redLed(12);
Led blueLed(13);
Buzzer buzzer(11);
Potentiometer potentiometer(A0);
Button overrideButton(10);

void setup() {
  Serial.begin(9600);
  byte numDigits = 1;
  byte digitPins[] = {};
  byte segmentPins[] = {6, 5, 2, 3, 4, 7, 8, 9};
  bool resistorsOnSegments = true;

  byte hardwareConfig = COMMON_CATHODE; 
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(100);
}

void loop() {
  int potentiometerValue = potentiometer.getValue();
  int potentiometerDisplayValue = potentiometerValue / 113;

  flameSensor.setSensitivity(potentiometerValue);

  if(flameSensor.fireDetected()) {
    sevseg.setChars("F");
    turnOnAlarm();
  }
  else {
    sevseg.setNumber(potentiometerDisplayValue);
    turnOffAlarm();
  }
  sevseg.refreshDisplay();
}

void turnOnAlarm() {
  redLed.on();
  blueLed.off();
  buzzer.ring();
}

void turnOffAlarm() {
  redLed.off();
  blueLed.on();
  buzzer.stopRinging();
}
