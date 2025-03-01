# Motion Detection System with ESP32 and PIR Sensor

This project shows you how to create a simple motion detection system using an ESP32 and a PIR (Passive Infrared) sensor. The PIR sensor detects movement, and when it does, it triggers an LED to light up and sends a message to the Serial Monitor to notify you in real-time.

### Features
- **Motion Detection:** The PIR sensor detects movement and triggers an action.
- **LED Indicator:** An LED lights up when motion is detected, giving you a clear visual alert.
- **Serial Output:** Each time motion is detected, a message ("Motion Detected!") is sent to the Serial Monitor for easy monitoring.

### Components Used
- **ESP32 Development Board:** This is the main controller, which reads the sensor input and controls the LED.
- **PIR Motion Sensor:** Detects motion by sensing infrared radiation (heat) from objects like humans or animals.
- **LED:** Lights up to show when motion is detected.
- **Resistors & Breadboard:** Used for connecting the sensor and LED to the ESP32.

### Pin Configuration
- **PIR Motion Sensor:** Connect the OUT pin to Pin 4 on the ESP32.
- **LED:** 
  - Connect the positive (long) leg of the LED to Pin 2.
  - Connect the negative (short) leg to GND through a 220-ohm resistor.

### Installation

#### Hardware Setup
1. **PIR Motion Sensor:**
   - Connect the VCC pin to 3.3V (or 5V depending on your sensor).
   - Connect the GND pin to ground.
   - Connect the OUT pin of the PIR sensor to Pin 4 on the ESP32.
2. **LED:**
   - Connect the positive (long) leg of the LED to Pin 2 on the ESP32.
   - Connect the negative (short) leg to GND through a 220-ohm resistor.

#### Software Setup
1. **Arduino IDE:** Make sure you have the ESP32 board support installed in Arduino IDE. You can follow the official setup guide to get it set up.
2. **Upload Code:** Open the provided code in the Arduino IDE, choose the correct ESP32 board, and click "Upload" to send it to your ESP32.

### Code Explanation

The code works by constantly checking the state of the PIR sensor connected to Pin 4:

- **When Motion is Detected:** If the PIR sensor detects motion (returns HIGH), it turns on the LED at Pin 2 and sends "Motion Detected!" to the Serial Monitor.
- **When No Motion is Detected:** If there is no motion (PIR returns LOW), the LED turns off.

### Code Walkthrough
1. **Pin Setup:** 
   - The `setup()` function initializes the PIR sensor (Pin 4) to detect motion, and the LED (Pin 2) to control the LED state.
2. **Motion Detection:** 
   - In the `loop()`, the code keeps checking for motion. If motion is detected, the LED lights up, and the message "Motion Detected!" is printed to the Serial Monitor. If no motion is detected, the LED turns off.

### How to Use
1. **Upload the Code:** After wiring up the PIR sensor and LED, upload the code to the ESP32.
2. **Open the Serial Monitor:** Once uploaded, open the Serial Monitor in Arduino IDE. You’ll see "Motion Detected!" printed every time the PIR sensor detects motion.
3. **Test Motion Detection:** Wave your hand or move in front of the PIR sensor, and the LED should light up. You'll also see the message in the Serial Monitor.

### Troubleshooting
- **LED Not Turning On:** Check the LED's connections and make sure the resistor is in place.
- **No Motion Detection:** Double-check the PIR sensor connections and allow it to warm up for a few seconds (some PIR sensors need time to start detecting).
- **No Serial Output:** Ensure that the ESP32 is connected to your computer, and that you've selected the correct serial port in the Arduino IDE.

### Future Improvements
- **Adjust Sensitivity:** Some PIR sensors let you adjust their sensitivity. Fine-tune this setting to improve motion detection based on your environment.
- **Add More Sensors:** To cover a larger area, consider adding more PIR sensors to the system.
- **Notifications:** You could add email or SMS notifications to alert you when motion is detected, turning your project into a simple security system.
