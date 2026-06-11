# ESP32 Bluetooth Speaker

## Overview

This project is an ESP32-based Bluetooth speaker that streams audio using the Bluetooth A2DP profile and outputs sound to an external speaker system. It also integrates an OLED display for system feedback. The firmware is built using PlatformIO and written in C++ with an intended modular architecture for Bluetooth, display, and system management.

---

## Features

- Bluetooth A2DP wireless audio streaming
- ESP32-based embedded audio system
- OLED display integration via I2C
- PlatformIO-based build and development environment
- Initial C++ firmware structure with planned modular class-based architecture

---

## Hardware

- ESP32 Dev Board  
- SSD1306 OLED Display (I2C)  
- Bluetooth audio source (phone, laptop, etc.)  
- External speaker / audio output system
- MAX98357A Amplifier

---

## Architecture

The current implementation uses a single main application loop with integrated Bluetooth and display functionality. The codebase is designed with future refactoring in mind to support a more modular C++ class-based structure.

Planned modules include:

- Bluetooth audio management (A2DP handling)
- Display / UI management (OLED rendering)
- Device state management (system control and updates)

---

## Technologies Used

- C++
- ESP32 Arduino Framework
- Bluetooth A2DP (wireless audio streaming)
- I2C Communication (OLED display)
- PlatformIO (development environment)

---

## Current Status

The system successfully connects to Bluetooth devices and streams audio through the ESP32. The OLED display is integrated at a basic level. The project is actively being developed toward a more structured and modular firmware design.

---

## Future Improvements

- Full modular class-based firmware architecture
- Metadata display (artist, track title, volume)
- Improved OLED UI rendering system
- Enhanced audio control features
- Better separation of system state and hardware drivers

---

## Notes

This project is part of an ongoing embedded systems build focused on Bluetooth audio streaming, real-time hardware integration, and firmware architecture design using ESP32.

---
