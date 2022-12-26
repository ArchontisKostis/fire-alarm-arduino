#include "FlameSensor.cpp"
#include "Potentiometer.cpp"
#include "Alarm.cpp"
#include "SevSeg.h"

#define BUZZER_PIN 11
#define RED_LED_PIN 12
#define BLUE_LED_PIN 13

SevSeg sevseg;  
FlameSensor flameSensor(A1);
Potentiometer potentiometer(A0);
Alarm alarm(BUZZER_PIN, RED_LED_PIN, BLUE_LED_PIN);


void setup() {
  Serial.begin(9600);
  initializeDigitDisplay();
}

void loop() {
  int potentiometerValue = potentiometer.getValue();
  int potentiometerDisplayValue = potentiometerValue / 113;

  flameSensor.setSensitivity(potentiometerValue);

  if(flameSensor.fireDetected()) {
    sevseg.setChars("F");
    alarm.setOnAlarm();
  }
  else {
    sevseg.setNumber(potentiometerDisplayValue);
    alarm.setOffAlarm();
  }
  sevseg.refreshDisplay();
}

void initializeDigitDisplay() {
  byte numDigits = 1;
  byte digitPins[] = {};
  byte segmentPins[] = {6, 5, 2, 3, 4, 7, 8, 9};
  bool resistorsOnSegments = true;

  byte hardwareConfig = COMMON_CATHODE; 
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(100);
}
