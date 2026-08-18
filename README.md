# Arduino-Based Radar System

A simple radar system developed using **Arduino Uno**, **HC-SR04 Ultrasonic Sensor**, and an **SG90 Servo Motor**. The servo continuously scans a 180° area while the ultrasonic sensor measures the distance of nearby objects. The data is visualized in real time using the Processing IDE.

## Features

- 180° object scanning
- Real-time distance measurement
- Radar visualization on computer
- Serial communication between Arduino and Processing

## Components Used

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| SG90 Servo Motor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |

## Circuit Diagram

<p align="center">
  <img src="Circuit_Diagram/circuit_diagram.png" width="700" alt="Circuit Diagram"/>
</p>

## Hardware Setup & Radar Output

<p align="center">
  <img src="Images/radar_output.png" width="700" alt="Arduino Radar Setup and Output"/>
</p>

The image above shows the complete hardware setup and the real-time radar visualization created using the Processing IDE.
## Working Principle

1. Servo rotates from 0° to 180°.
2. Ultrasonic sensor measures object distance.
3. Arduino sends angle and distance through serial communication.
4. Processing displays the radar sweep and detected object.

## Technologies

- Arduino Uno
- Embedded C
- HC-SR04
- SG90 Servo
- Processing IDE

## Author

**Priyanshu Prajapati**
