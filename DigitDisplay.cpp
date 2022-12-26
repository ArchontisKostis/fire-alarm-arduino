#include "HardwareSerial.h"
#include <Arduino.h>
#include "SevSeg.h"

class DigitDisplay {
  private:
    SevSeg display;

  public:
    DigitDisplay(byte hardwareConfig, byte numberOfDigits, byte digitPins[], byte segmentPins[], bool resistorsOnSegments = true) {
      display.begin(hardwareConfig, numberOfDigits, digitPins, segmentPins, resistorsOnSegments);
      display.setBrightness(100);
    }

    void setNumber(int numberToShow) {
      display.setNumber(numberToShow);
    }

    void setChars(char *characterToShow) {
      display.setChars(characterToShow);
    }

    void showFireWarning() {
      setChars("F");
    }

    void refresh() {
      display.refreshDisplay();
    }
};