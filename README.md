# Automated External Defibrillator (AED) Simulation

## **Project Overview:**

This project involves the development of a software-based prototype simulating the functionalities of an Automated External Defibrillator (AED) Plus device. It's designed to assist users in cardiac emergencies by guiding them through the process of analyzing heart rhythms, providing electric shocks, and offering real-time CPR feedback.

## **Features:**

Power-On Self-Test: Simulates the AED's initial self-check procedure.
Cardiac Rhythm Analysis: Detects and interprets heart rhythms to determine if a shock is needed.
Shock Delivery Simulation: Allows users to simulate the delivery of an electrical shock.
Real-Time CPR Feedback: Provides guidance on the quality and rate of chest compressions.
Visual and Voice Prompts: Guides users through each step of the emergency procedure.
Safety Features: Includes safety checks to prevent accidental shocks.

## **Main Classes:** 

MainWindow: The central UI component that orchestrates the interaction between different modules.
SelfTest: Handles the AED's self-test procedure upon powering on.
AedInstruction: Manages the step-by-step instructions provided to the user during an emergency.
ShockButton: Simulates the functionality of delivering a shock.
TestCases: Manages different test scenarios for the AED, including normal operation and exceptional cases like low battery or connection loss.

## **Design Patterns:**

Observer Pattern: Utilized via Qt's signal and slot mechanism for real-time UI updates.
State Pattern: Manages the various states of the AED operation.
Strategy Pattern: Used for implementing different algorithms for cardiac rhythm analysis.
Mediator Pattern: Facilitates communication between different components within the application.
Command Pattern: Encapsulates actions like turning on/off the AED and delivering a shock into command objects.

## **Dependencies:**

Qt Framework: Used for the graphical user interface and signal-slot mechanism.
Installation and Usage

To use this simulation, ensure you have the Qt framework installed. Clone the repository and open the project in Qt Creator. Clean, Build and run the simulation to interact with the AED prototype.

## **User Interface:** 
Here is a couple images of the project interface: 

<img width="1031" alt="Screenshot 2024-01-04 at 11 32 51 PM" src="https://github.com/omarabdelhadi129/AED-Simmiluation-QT-C-/assets/69729443/6233c71b-3203-4b8a-86ea-b1e8c3a3090f">

<img width="1029" alt="Screenshot 2024-01-04 at 11 34 44 PM" src="https://github.com/omarabdelhadi129/AED-Simmiluation-QT-C-/assets/69729443/e8779eba-ea6d-437e-a243-7028365feb3d">

<img width="1029" alt="Screenshot 2024-01-04 at 11 34 10 PM" src="https://github.com/omarabdelhadi129/AED-Simmiluation-QT-C-/assets/69729443/0d3708a9-1c0f-4106-84d3-146fc0b3c97b">

<img width="1038" alt="Screenshot 2024-01-04 at 11 34 58 PM" src="https://github.com/omarabdelhadi129/AED-Simmiluation-QT-C-/assets/69729443/b1bd74a7-83d5-457b-af65-196b2e62e38d">

<img width="1027" alt="Screenshot 2024-01-04 at 11 38 04 PM" src="https://github.com/omarabdelhadi129/AED-Simmiluation-QT-C-/assets/69729443/9718f4ba-4a2d-4baf-8725-cc4dac9d51c7">

<img width="1023" alt="Screenshot 2024-01-04 at 11 37 36 PM" src="https://github.com/omarabdelhadi129/AED-Simmiluation-QT-C-/assets/69729443/7fdcdcbe-a532-4b6c-899c-eb38076e8969">




**Developed by: Omar Abdelhadi**






