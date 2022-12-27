![g3869](https://user-images.githubusercontent.com/77233507/209699623-383fafbc-c033-4e37-b3c7-a65f35f014ef.png)
# Arduino Fire Alarm System
This project is a simple yet effective fire alarm system that uses an Arduino board and a few key components to detect flames and alert the user of potential danger.
## Photos
![1672155059772](https://user-images.githubusercontent.com/77233507/209700299-f2a272f1-5ade-4fc9-844b-7d535a48f43b.jpg)


## Hardware Components
### Main Components
- Arduino board (I used an Arduino UNO R3 for this project)
- Flame sensor: capable of detecting infrared light with a wavelength ranging from 700nm to 1000nm, allowing it to detect a flame within a certain radius
- Potentiometer: allows the user to fine-tune the sensitivity of the alarm, ensuring that it triggers at the appropriate distance
- 7-segment display: displays the current sensitivity value on a scale from 0 (the alarm will never trigger) to 9 (the alarm will be triggered when there is fire detected at the maximum distance that the sensor can detect). When the alarm is triggered, the display shows the letter "F"
- Red LED: serves as a visual indicator that the alarm has been triggered
- Blue LED: indicates that the alarm is on and ready for use
- Active buzzer: emits a loud, high-pitched sound when the alarm is triggered, alerting users of potential danger

### Secondary Components
- 2 220Ω resistors (for the LEDs)
- 1 330Ω resistor (for the flame sensor)
- 1 1kΩ resistor (for the 7-segment display)

## Functionality
When the fire alarm system is powered on, the blue LED is lit and the 7-segment display shows the current sensitivity value. The user can adjust the sensitivity of the alarm using the potentiometer at any time while the system is on. If the flame sensor detects a flame within the specified distance, the alarm is triggered and the red LED and active buzzer are activated, while the 7-segment display shows the letter "F".

## Usage
To use the fire alarm system, follow these steps:

1. Assemble the hardware components according to the circuit diagram provided.
2. Upload the code to the Arduino board.
3. Adjust the sensitivity of the alarm using the potentiometer as needed.
4. If the flame sensor detects a flame within the specified distance, the alarm will be triggered.

## Circuit Diagram
![fire-alarm-display-tinkercad](https://user-images.githubusercontent.com/77233507/209581397-067f6db9-ad18-45d5-9741-3952dfcee302.PNG)

## Cloning and Uploading This Repository to an Arduino Board

To clone and upload this repository to an Arduino board, follow these steps:

1. Make sure you have Git installed on your computer. If you don't have it, you can download and install it from the [official website](https://git-scm.com/downloads).

2. Open a terminal window on your computer and navigate to the directory where you want to clone the repository.

3. Type the following command to clone this repository:
    ```
    git clone https://github.com/ArchontisKostis/fire-alarm-arduino.git
    ```
4. Press Enter to execute the command. This will create a new subdirectory with the same name as the repository, and clone the repository into it.

5. Connect your Arduino board to your computer using a USB cable.

6. Open the Arduino Integrated Development Environment (IDE) on your computer.

7. In the Arduino IDE, click the "File" menu and select "Open".

8. Navigate to the directory where you cloned the repository and select the directory folder.

9. Click the "Upload" button in the Arduino IDE to upload the code to your Arduino board.

Once the upload process is complete, the code will be running on your Arduino board and the fire alarm system will be ready for use (assuming you have assembled the hardware components according to the circuit diagram).


## Further Reading
For more information on using Git and Github, you can refer to the [Git Documentation](https://git-scm.com/doc) and the [Github Documentation](https://docs.github.com/). \
For more information on using Arduino, you can refer to the [Arduino Documentation](https://docs.arduino.cc/) and the [Arduino Reference](https://www.arduino.cc/reference/en/)
