# Bidirectional DC Motor Speed & Direction Controller

## Description
This project implements a bidirectional speed and direction 
controller for a DC motor using an Arduino Uno, L293D H-Bridge 
motor driver, and a joystick for user input.

## Components
- Arduino Uno
- Joystick Module
- L293D H-Bridge Motor Driver
- DC Motor
- Battery

## How It Works
The motor speed is controlled via PWM signal sent to EN1.
The direction is controlled via IN1 and IN2 signals.

| Joystick Position | IN1 | IN2 | Motor |
|---|---|---|---|
| Right (value > 470) | HIGH | LOW | Forward |
| Left (value < 470) | LOW | HIGH | Reverse |
| Center | LOW | LOW | Stopped |

## Pin Configuration
| Component | Arduino Pin |
|---|---|
| L293D IN1 (A+) | Pin 4 |
| L293D IN2 (A-) | Pin 5 |
| L293D EN1 (PWM) | Pin 10 |
| Joystick X-axis | A0 |

## Circuit Diagram

### Real Circuit
![Real Circuit](circuit_real.jpg)

### Schematic (Fritzing)
![Fritzing](circuit_fritzing.jpg)

## Tools Used
- Arduino IDE
- Proteus (simulation)
- Embedded C
- Arduino IDE
- Proteus (simulation)
- Embedded C
