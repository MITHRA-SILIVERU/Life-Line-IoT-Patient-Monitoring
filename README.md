# LIFE-LINE: Real-Time Patient Health Monitoring System 🏥🚑

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![IoT](https://img.shields.io/badge/Focus-IoT%20|%20Healthcare-blue.svg)]()

## 📌 Project Overview
Life-Line is an IoT-based healthcare solution designed to track critical health parameters continuously. The system monitors heart rate, body temperature, and blood oxygen saturation (SpO2) in real-time. It leverages a network of wearable sensors and cloud technology to provide healthcare professionals remote access to patient data for timely interventions.

---

## 🚀 Key Features
* **Continuous Monitoring:** 24/7 real-time tracking of vital signs.
* **Automated Alerts:** Instant notifications and buzzer alarms when abnormal patterns (e.g., High Temp or Low SpO2) are detected.
* **Remote Access:** Data transmission to mobile/web interfaces via Wi-Fi for remote observation.
* **Energy Efficient:** Wearable sensors optimized for long-term monitoring.

---

## 🛠️ Hardware Stack
The system is built using the following components:
* **Microcontroller:** Arduino Nano (Processing Module)
* **Communication:** ESP-01 Wi-Fi Module (IoT Connectivity)
* **Sensors:** * **MAX30100:** Pulse Oximeter & Heart-rate sensor
    * **DHT11:** Digital Humidity and Temperature sensor
* **Output:** 16x2 LCD Display & Piezo Buzzer for local alerts

---

## 📊 Comparison with Existing Systems
| Aspect | Existing Methods | Life-Line System |
| :--- | :--- | :--- |
| **Monitoring** | Limited or periodic | Continuous and immediate |
| **Response** | Basic or delayed | Instant alerts to caregivers |
| **Cost** | High (Hospital systems) | Affordable & Portable |
| **Connectivity** | Bluetooth, Wi-Fi (Local) | IoT-enabled (Wi-Fi/GSM) |

---

## 📂 Repository Structure
* **`code/`**: Contains the Arduino `.ino` sketch and logic.
* **`Docs/`**: Full B.Tech Mini Project Report (PDF).
* **`Research_Paper/`**: Published research paper documentation.
* **`Output_Screens/`**: Prototype images and serial terminal readings.

---

## ⚙️ Setup & Installation
1. Install **Arduino IDE**.
2. Add libraries: `MAX30100lib` and `DHT`.
3. Connect sensors as per the Architecture Diagram in the `Docs` folder.
4. Upload the code to **Arduino Nano**.
5. Monitor data using the **Serial Wi-Fi Terminal App**.

---
## 📸 Project Prototype & App Interface

| Prototype Setup | Serial Wi-Fi Terminal App |
| :---: | :---: |
| ![Prototype](Output%20Screens/4.jpg) | ![App Screenshot](Output%20Screens/app.jpg) |

## 📜 Research & Accuracy
This project demonstrates high data accuracy with an error margin of less than 3% for vital signs. The system ensures near-instantaneous updates with a transmission latency of 0.5-1 second.

---

## 👩‍💻 Author
**S. Mithra** *B.Tech in Computer Science and Engineering (IoT)* *ACE Engineering College (An Autonomous Institution)*
