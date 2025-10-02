# Hazard Disposal Robot Car 🚗🤖

A wireless Arduino-based robot car with a mounted robotic arm, designed to safely handle and transport hazardous objects.  
Built as part of the TEJ4M Computer Engineering summative project.

---

## 🔧 Tech Stack
- Arduino Uno & ESP8266 (WiFi control)
- C++ (Arduino IDE)
- Blynk IoT App (mobile control)
- L298N Motor Driver Module
- Servo Motors (HS-322HD for steering + robotic arm)
- AutoCAD & Woodworking (mount design)
- Parallel 7.2V batteries for higher current output

---

## 🎯 Features
- Wireless control of the car via **ESP8266 + Blynk app**
- Custom-built **robotic arm** for object pickup and transport
- **Separate Arduino Uno + potentiometer controller** for arm movement
- Wooden mounts and modified RC car chassis
- Designed to simulate **hazard disposal by law enforcement**

---

## 🚀 How to Run
1. Upload `src/car_control.ino` to the ESP8266 board.  
   - Connect via the **Blynk IoT app** on your smartphone.  
2. Upload `src/arm_control.ino` to an Arduino Uno.  
   - Connect potentiometers to control the arm manually.  
3. Power with dual 7.2V batteries in parallel for stable operation.  

---

## 🎬 Demo Video
Click below to see the robot car in action:  

[![Project Demo](https://img.youtube.com/vi/L9taRjRUhoM/0.jpg)](https://www.youtube.com/watch?v=L9taRjRUhoM)

---

## 📖 Documentation
- [Full Project Report (PDF)](docs/Robot_Report.pdf)  

---

## 📸 Media
- See `/media` folder for photos, CAD screenshots, and demo clips.

---

## 📚 Future Improvements
- Add a **camera module** for live hazard inspection  
- Enable **wireless robotic arm control** via Blynk (instead of wired Arduino Uno)  
- Reduce chassis weight & upgrade motors for improved speed  
- Improve aesthetics for a more professional prototype finish  

---

## 📄 License
MIT
