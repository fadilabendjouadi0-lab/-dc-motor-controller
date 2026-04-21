# Bidirectional DC Motor Speed & Direction Controller

## Description
This project implements a bidirectional speed and direction 
controller for a DC motor using an Arduino Uno, L293D motor 
driver, and a joystick for user input.

## Components
- Arduino Uno
- L293D Motor Driver
- DC Motor
- Joystick Module
- Power Supply

## How It Works
- Joystick RIGHT → Motor spins Forward
- Joystick LEFT → Motor spins in Reverse  
- Joystick CENTER → Motor stops
- Speed is controlled via PWM signal

## Pin Configuration
| Component | Arduino Pin |
|---|---|
| L293D IN1 (A+) | Pin 4 |
| L293D IN2 (A-) | Pin 5 |
| L293D EN1 (PWM) | Pin 10 |
| Joystick X-axis | A0 |

## Tools Used
- Arduino IDE
- Proteus (simulation)
- Embedded C