# Arduino-automatic-fan-controller

Arduino Automatic Fan Controller

Project Overview

This project implements a temperature-based automatic fan control system using an Arduino Uno and a DHT11 temperature and humidity sensor.

Since a physical fan is not included in my current kit, an LED is used as a stand-in to represent the fan's ON/OFF state.

The system reads environmental temperature, displays sensor readings through the Serial Monitor, and is designed to activate the output when the temperature reaches a predefined threshold.

Objectives

- Read temperature and humidity using a DHT11 sensor.
- Display sensor readings in the Arduino Serial Monitor.
- Use temperature thresholds to control an output.
- Add a push button for manual override.
- Develop control logic that can later be adapted to a real DC fan.

Components

- Arduino Uno R3
- DHT11 temperature and humidity sensor
- LED
- 220Ω resistor
- Push button
- Breadboard
- Jumper wires
- USB cable

Current Progress

- Set up the Arduino development environment.
- Install the required DHT sensor library.
- Write code to read temperature and humidity.
- Test sensor readings and verify reliable operation.
- Connect the LED and implement automatic temperature control.
- Implement the manual override button.
- Test the complete system.

Software Requirements

- Arduino IDE
- Adafruit DHT sensor library
- Adafruit Unified Sensor library, if required by the installed library version

How It Works

1. The DHT11 measures the surrounding temperature and humidity.
2. The Arduino reads the sensor data.
3. The program compares the temperature with a configured threshold.
4. The LED represents the fan's operating state.
5. The push button will provide manual override functionality.
6. The Serial Monitor displays temperature, humidity, operating mode, and output state as the project develops.

Learning Outcomes

This project explores:

- Embedded C/C++ programming
- Sensor interfacing
- Digital input and output
- Conditional statements
- Microcontroller-based automation
- Basic actuator control
- Hardware debugging and testing

Future Improvements

- Replace the LED with a suitable low-voltage DC fan.
- Use a correctly rated MOSFET or transistor driver.
- Add an LCD to display temperature and system status.
- Introduce temperature hysteresis to prevent rapid switching near the threshold.
- Add data logging and IoT monitoring.

Safety

Never connect a DC fan directly to an Arduino GPIO pin. A real fan requires an appropriate driver circuit and a suitable power supply. Avoid household mains voltage.

Project Status

In Development — Week 5, Project 3 of my embedded systems learning journey.

This project is part of my hands-on journey toward developing skills in embedded systems, IoT, robotics, and automation.
