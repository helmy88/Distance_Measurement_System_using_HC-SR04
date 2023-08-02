Distance-based LED and Buzzer Control with HC-SR04

Description:
This Arduino sketch demonstrates distance-based control of LEDs and a buzzer using the HC-SR04 ultrasonic sensor. As an object approaches the sensor, the LEDs and the buzzer respond based on predefined distance thresholds. This project showcases how to create a visual and auditory feedback system for varying distances.

Components Needed:
- Arduino board (e.g., Arduino Uno)
- HC-SR04 ultrasonic sensor
- LEDs (green, yellow, red)
- Buzzer
- Resistors and jumper wires

Circuit Setup:
1. Connect the HC-SR04's trigPin to digital pin 2, and the echoPin to digital pin 3.
2. Connect the green LED to digital pin 7, yellow LED to digital pin 8, and red LED to digital pin 9.
3. Connect the buzzer to digital pin 10.
4. Configure resistors and connections as required.

Uploading the Sketch:
1. Open the Arduino IDE and create a new sketch.
2. Copy and paste the provided code into the sketch.
3. Connect the Arduino board to your computer via USB.
4. Select the correct board and port from the "Tools" menu in the IDE.
5. Click the "Upload" button to upload the code to the Arduino board.

Usage:
1. After uploading the code, the Arduino will monitor the distance using the HC-SR04 sensor.
2. Open the Serial Monitor in the Arduino IDE (Tools -> Serial Monitor) to view distance readings and LED/buzzer responses.

Behavior:
- Green LED: Activates when the detected distance is within the green threshold.
- Yellow LED: Activates when the detected distance is within the yellow threshold.
- Red LED and Buzzer: Activate when the detected distance exceeds the red threshold, indicating proximity to an object.

Customization:
- Adjust the distance thresholds (greenDistance, yellowDistance, redDistance) as needed for your application.
- Modify the code to suit your project's requirements.

Acknowledgments:
This Arduino project is inspired by creative makers and developers within the Arduino community. Explore and expand upon this project to enhance your understanding of sensor-based control systems!
