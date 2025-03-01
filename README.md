# Passive-Infra-Red-Sensor
ESP32 Motion Detection with PIR Sensor
This project is all about creating a simple motion detection system using an ESP32 and a PIR (Passive Infrared) sensor. The PIR sensor detects movement, and when it does, it triggers an LED to light up, providing a clear visual indication. Along with this, the ESP32 sends a message to the Serial Monitor, notifying us that motion has been detected.

Features
Motion Detection: The PIR sensor senses movement within its range and triggers an action.
LED Indicator: The system lights up an LED when motion is detected, acting as a visual alert.
Serial Output: Every time motion is detected, a message ("Motion Detected!") is sent to the Serial Monitor, providing real-time feedback.
Components Used
ESP32 Development Board: The brains of the operation! It reads the sensor’s input and controls the LED.
PIR Motion Sensor: This sensor detects motion by sensing infrared radiation (heat) from objects, typically humans or animals.
LED: Used to show when motion is detected.
Resistors and Breadboard: To properly connect the sensor and LED to the ESP32.
Pin Configuration
PIR Motion Sensor: Connect the sensor’s output to Pin 4 on the ESP32.
LED: Connect the positive (long) leg to Pin 2, and the negative (short) leg to GND through a 220-ohm resistor.
Installation
Hardware Setup
PIR Motion Sensor:
Connect the VCC pin to 3.3V (or 5V depending on the sensor model).
Connect the GND pin to ground.
Connect the OUT pin of the PIR sensor to Pin 4 on the ESP32.
LED:
Connect the positive (long) leg of the LED to Pin 2 on the ESP32.
Connect the negative (short) leg to GND through a current-limiting resistor (220 ohms).
Software Setup
Arduino IDE: Make sure you have the ESP32 board support installed. You can follow the official ESP32 setup guide to get this set up in your IDE.
Upload Code: Open the provided code in the Arduino IDE, choose the right ESP32 board, and hit "Upload" to send it to your ESP32.
Code Explanation
The code works by continuously checking the state of the PIR sensor connected to Pin 4:

If the PIR sensor detects motion (returns HIGH), it turns the LED on by setting Pin 2 to HIGH.
At the same time, a message ("Motion Detected!") is printed to the Serial Monitor.
If no motion is detected (when LOW is returned by the PIR sensor), the LED is turned off (LOW).
Code Walkthrough
Pin Setup: The setup() function initializes the PIR_PIN (Pin 4) to read the PIR sensor and the LED_PIN (Pin 2) to control the LED.
Motion Detection: The loop() function constantly checks the PIR sensor. If motion is detected, it lights up the LED and prints "Motion Detected!" to the Serial Monitor. If no motion is detected, the LED is turned off.
How to Use
Upload the Code: After setting up your hardware (PIR sensor and LED), upload the code to your ESP32 using the Arduino IDE.
Open the Serial Monitor: After uploading, open the Serial Monitor to watch the messages. You’ll see "Motion Detected!" every time the PIR sensor detects motion.
Test Motion Detection: Simply wave your hand or move in front of the PIR sensor, and the LED will light up. You'll also see the message appear in the Serial Monitor.
Troubleshooting
LED Not Turning On: Double-check your wiring. Ensure that the LED’s connections are correct, and the resistor is properly placed.
No Motion Detection: Ensure that the PIR sensor is connected properly, and make sure it has warmed up (some PIR sensors take a few seconds to start detecting).
No Output in the Serial Monitor: Make sure your ESP32 is properly connected to your computer and that you've selected the correct serial port in the Arduino IDE.
Future Improvements
Adjust Sensitivity: Many PIR sensors allow you to adjust the sensitivity. You can tweak this to better detect motion in your specific environment.
Add More Sensors: Want to cover a larger area? Add more PIR sensors to your setup to monitor multiple zones.
Notifications: Enhance the system by adding email or SMS notifications when motion is detected, turning this project into a simple security system.
