# Arduino LED Melody Project 🎵💡

A simple and interactive Arduino project that combines LEDs, a buzzer, and a button
to create visual and audio feedback.  
The system plays LED sequences with sound and a pleasant melody when the button is pressed.

## 🚀 Features
- Multiple LEDs controlled using an array
- Buzzer sound effects and melody using `tone()`
- Button input with internal pull-up resistor
- Audio-visual feedback without using a screen
- Clean and beginner-friendly Arduino code

## 🧰 Hardware Components
- Arduino Uno (or compatible board)
- 3 LEDs
- 3 × 220Ω resistors
- Buzzer (Active or Passive)
- Push Button
- Breadboard & Jumper Wires

## 🔌 Pin Configuration
| Component | Pin |
|---------|-----|
| LED 1 | 5 |
| LED 2 | 7 |
| LED 3 | 8 |
| Buzzer | 10 |
| Button | 12 |

## ▶️ How It Works
1. Press the button
2. LEDs turn ON one by one with a short beep
3. After the LED sequence, a happy melody is played
4. The system waits before the next activation

## 🧠 What You Learn
- Using arrays for pin management
- Button handling with `INPUT_PULLUP`
- Generating sound using `tone()`
- Designing audio-visual feedback without a screen
- Writing clean and readable embedded code

## 📸 Demo
_Add a photo or video of the project here_

## 🛠️ Future Improvements
- Multiple modes with different melodies
- Non-blocking code using `millis()`
- EEPROM to save settings
- Game mode and reaction test

## 📄 License
MIT License