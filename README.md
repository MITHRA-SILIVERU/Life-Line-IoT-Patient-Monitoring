# LIFE-LINE: Real-Time Patient Health Monitoring System 🏥🚑

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![IoT](https://img.shields.io/badge/Focus-IoT%20|%20Healthcare-blue.svg)]()

## 📌 Project Overview
[cite_start]Life-Line is an IoT-based healthcare solution designed to track critical health parameters continuously[cite: 61]. [cite_start]The system monitors heart rate, body temperature, and blood oxygen saturation (SpO2) in real-time[cite: 61, 316]. [cite_start]It leverages a network of wearable sensors and cloud technology to provide healthcare professionals remote access to patient data for timely interventions[cite: 62, 64].

---

## 🚀 Key Features
* [cite_start]**Continuous Monitoring:** 24/7 real-time tracking of vital signs[cite: 280, 281].
* [cite_start]**Automated Alerts:** Instant notifications and buzzer alarms when abnormal patterns (e.g., High Temp or Low SpO2) are detected[cite: 67, 277].
* [cite_start]**Remote Access:** Data transmission to mobile/web interfaces via Wi-Fi for remote observation[cite: 63, 317].
* [cite_start]**Energy Efficient:** Wearable sensors optimized for long-term monitoring[cite: 1031].

---

## 🛠️ Hardware Stack
[cite_start]The system is built using the following components [cite: 274, 354, 654-663]:
* [cite_start]**Microcontroller:** Arduino Nano (Processing Module)[cite: 355, 661].
* [cite_start]**Communication:** ESP-01 Wi-Fi Module (IoT Connectivity)[cite: 356, 686].
* [cite_start]**Sensors:** * **MAX30100:** Pulse Oximeter & Heart-rate sensor[cite: 357, 671].
  * [cite_start]**DHT11:** Digital Humidity and Temperature sensor[cite: 358, 678].
* [cite_start]**Output:** 16x2 LCD Display & Piezo Buzzer for local alerts[cite: 359, 360, 712].

---

## 📊 Comparison with Existing Systems
| Aspect | Existing Methods | Life-Line System |
| :--- | :--- | :--- |
| **Monitoring** | [cite_start]Limited or periodic [cite: 1054] | [cite_start]Continuous and immediate [cite: 1054] |
| **Response** | [cite_start]Basic or delayed [cite: 1054] | [cite_start]Instant alerts to caregivers [cite: 1054] |
| **Cost** | [cite_start]High (Hospital systems) [cite: 1054] | [cite_start]Affordable & Portable [cite: 1054] |
| **Analytics** | [cite_start]Basic insights [cite: 1054] | [cite_start]Advanced predictive analytics [cite: 1054] |

---

## 📂 Repository Structure
* [cite_start]**`code/`**: Contains the Arduino `.ino` sketch and logic [cite: 718-848].
* [cite_start]**`Docs/`**: Full B.Tech Mini Project Report (PDF).
* [cite_start]**`Research_Paper/`**: Published research paper documentation [cite: 1083-1094].
* **`Output_Screens/`**: Prototype images and serial terminal readings [cite: 884-980].

---

## ⚙️ Setup & Installation
1. [cite_start]Install **Arduino IDE**[cite: 362, 991].
2. [cite_start]Add libraries: `MAX30100lib` and `DHT`[cite: 994, 995].
3. [cite_start]Connect sensors as per the **Architecture Diagram** in the `Docs` folder[cite: 638, 647].
4. [cite_start]Upload the code to **Arduino Nano**[cite: 1006].
5. [cite_start]Monitor data using the **Serial Wi-Fi Terminal App**[cite: 363, 930, 978].

---

## 📜 Publication & Research
[cite_start]This project is backed by research and literature surveys, referencing advancements in IoT-based healthcare by Shoban Babu et al. and P. Kumar et al [cite: 209, 217, 1086-1094]. [cite_start]The findings demonstrate high data accuracy with an error margin of less than 3%[cite: 1025, 1040].

---

## 👩‍💻 Author
**S. [cite_start]Mithra** *B.Tech in Computer Science and Engineering (IoT)* [cite: 10, 51, 57]  
[cite_start]*ACE Engineering College (An Autonomous Institution)* [cite: 1, 15, 20]
