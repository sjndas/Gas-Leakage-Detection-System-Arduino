# Gas-Leakage-Detection-System-Arduino

Gas leakage detection system using Arduino and the MQ-2 gas sensor with LCD display and audible/visual alerts.

## Project Overview

A gas leakage detection system developed using Arduino and the MQ-2 gas sensor. The system continuously monitors combustible gases and smoke and provides real-time status indication on a 16×2 LCD. Audible and visual alerts are generated using a buzzer and LED when the gas concentration exceeds a predefined threshold, enabling early detection and improved safety.

## Technologies Used

- Arduino Uno
- MQ-2 Gas Sensor
- 16×2 LCD Display
- Buzzer
- LED
- Embedded C

## Features

- Real-time gas concentration monitoring
- LCD display for gas value and system status
- Audible and visual alerts using buzzer and LED
- Threshold-based gas leak detection
- Serial monitoring for debugging

## Components Used

- Arduino Uno
- MQ-2 Gas Sensor Module
- 16×2 LCD Display
- Buzzer
- LED
- 220 Ω Resistor
- Breadboard
- Jumper Wires

## Working Principle

The MQ-2 sensor continuously measures the concentration of combustible gases and smoke. The Arduino reads the analog output of the sensor and compares it with a predefined threshold value. When the gas concentration exceeds the threshold, the system activates the buzzer and LED and displays a warning message on the LCD. Under normal conditions, the system indicates a safe status.

## Author

**Sajindas M**
