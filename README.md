![g3869](https://user-images.githubusercontent.com/77233507/209699623-383fafbc-c033-4e37-b3c7-a65f35f014ef.png)
# :fire:Arduino Fire Alarm System
This project is a simple yet effective fire alarm system that uses an Arduino board and a few key components to detect flames and alert the user of potential danger.

## 📸 Photos
![image3646](https://user-images.githubusercontent.com/77233507/209828144-b8996c96-684b-41f6-9ecc-2b53a2509434.png)
![image3563-min](https://user-images.githubusercontent.com/77233507/209829410-6df1ebc9-aa74-4552-8a64-b36615c7463d.png)

## 📟 Hardware Components
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

## ⚙️ Functionality
When the fire alarm system is powered on, the blue LED is lit and the 7-segment display shows the current sensitivity value. The user can adjust the sensitivity of the alarm using the potentiometer at any time while the system is on. If the flame sensor detects a flame within the specified distance, the alarm is triggered and the red LED and active buzzer are activated, while the 7-segment display shows the letter "F".

## 🚨 Usage
To use the fire alarm system, follow these steps:

1. Assemble the hardware components according to the circuit diagram provided.
2. Upload the code to the Arduino board.
3. Adjust the sensitivity of the alarm using the potentiometer as needed.
4. If the flame sensor detects a flame within the specified distance, the alarm will be triggered.

## 🛠 Circuit Diagram
View on [Tinkercad](https://www.tinkercad.com/things/ktwTRIdclBs-arduino-fire-alarm-system). <br>
![Circuit Diagram Tinkercad](https://user-images.githubusercontent.com/77233507/209828299-fa2bf7d7-e8c9-42a6-b6b2-51c26cdf805e.png) 


## 👩🏻‍💻 Cloning and Uploading This Repository to an Arduino Board

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

## ⚠️ Disclaimer

This fire alarm system is a homemade project and **has not been tested or certified by any official body**. It is intended for educational and experimental purposes only and **should not be relied upon as a sole means of fire detection**. \
If you detect a fire using this system, **you should immediately evacuate the area and call emergency services**. \
\
**The developer of this system is not responsible for any damages or injuries that may result from the use of this system. Use at your own risk.**

## 💻 Further Reading
For more information on using Git and Github, you can refer to the [Git Documentation](https://git-scm.com/doc) and the [Github Documentation](https://docs.github.com/). \
For more information on using Arduino, you can refer to the [Arduino Documentation](https://docs.arduino.cc/) and the [Arduino Reference](https://www.arduino.cc/reference/en/)

## 📜 License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
