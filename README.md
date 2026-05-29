# stm32_bare_metal

A simple, growing collection of custom bare-metal (register-level) peripheral drivers for STM32 microcontrollers, developed without using HAL or LL standard libraries. 

The main goal of this repository is to understand the inner workings of the MCU architecture and write clean, low-level code interacting directly with hardware registers.

## 📌 Project Status
This repository is **actively maintained**. I am continuously developing and adding new peripheral packages as I learn and build more hardware projects.

## 🛠️ Supported Hardware
* **Target MCU:** STM32F103C8T6 (Blue Pill)

## 📁 General Structure
Every peripheral package is designed to be modular:
* `src/` - Core driver implementations (initialization and register configurations).
* `inc/` - Header files with bit masks, macros, and register maps.
* `examples/` - Minimal code snippets demonstrating how to run the package.
