#include "FlameSensor.cpp"
#include "Potentiometer.cpp"
#include "Alarm.cpp"
#include "DigitDisplay.cpp"

#define BUZZER_PIN 11
#define RED_LED_PIN 12
#define BLUE_LED_PIN 13
#define FLAME_SENSOR_PIN A1
#define POTENTIOMETER_PIN A0

// --- DISPLAY INITIALIZATION DATA ---
byte numDigits = 1;
byte digitPins[] = {};
byte segmentPins[] = {6, 5, 2, 3, 4, 7, 8, 9};
bool resistorsOnSegments = true;
// ------------------------------------

FlameSensor flameSensor(FLAME_SENSOR_PIN);
Potentiometer potentiometer(POTENTIOMETER_PIN);
Alarm alarm(BUZZER_PIN, RED_LED_PIN, BLUE_LED_PIN);
DigitDisplay digitDisplay(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistorsOnSegments);


void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensitivity = potentiometer.getValue();
  int sensitivityDisplayValue = sensitivity / 113;

  flameSensor.setSensitivity(sensitivity);

  if(flameSensor.fireDetected()) {
    digitDisplay.setChars("F");
    alarm.setOnAlarm();
  }
  else {
    digitDisplay.setNumber(potentiometerDisplayValue);
    alarm.setOffAlarm();
  }
  digitDisplay.refresh();
}
