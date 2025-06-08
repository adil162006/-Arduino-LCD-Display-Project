# Arduino LCD Display Project

This is a simple Arduino project that demonstrates how to interface a 16x2 Liquid Crystal Display (LCD) using the `LiquidCrystal` library.

## 📋 Project Overview

The sketch initializes a 16x2 LCD and displays a welcome message:  
**"Hello, Adil Bhai !"**

## 🧰 Components Required

- Arduino Uno or compatible board  
- 16x2 LCD Display  
- Jumper wires  
- Breadboard  
- 10K Potentiometer (for contrast control)  
- USB Cable for programming

## 🔌 Circuit Connections

| LCD Pin | Connects To (Arduino) |
|---------|------------------------|
| RS      | 12                     |
| E       | 11                     |
| D4      | 5                      |
| D5      | 4                      |
| D6      | 3                      |
| D7      | 2                      |
| VSS     | GND                    |
| VDD     | 5V                     |
| VO      | Potentiometer Center   |
| RW      | GND                    |
| A (LED+) | 5V (via 220Ω resistor)|
| K (LED-) | GND                   |

