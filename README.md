# automatic-Washing-machine-simulation
Embedded Washing Machine Simulation using Picsimlab And MPLAB

# Automatic Washing Machine Simulation
This is a simulation of an automatic washing machine using Embedded C, designed and built using MPLAB IDE and tested in PICSimLab. The system includes safety alerts, selection menus, buzzer control, timer, and mode settings — just like a real washing machine!

## 🚀 Features
- LCD displays Power on startup
- Multiple wash modes and water level selection
- Start/Stop functionality using keypad switches
- Door lock safety with buzzer alerts
- Timer-based washing with real-time display
- Remove Clothes alert once the cycle ends
## 🧾 Step-by-Step Process With Screenshots
### 🔹 Step 1: Power On the Machine
Press Switch 5 to power on the washing machine.

![project1](https://github.com/user-attachments/assets/82f16c11-51f4-476d-bc04-4f8f5fa86b2d)

### 🔹 Step 2: Washing Program Displayed Automatically
Once powered on, the machine displays available washing modes like Daily, Heavy, Delicates.

![project2](https://github.com/user-attachments/assets/dedede6e-99a6-4d0c-b068-4bfc1474daa9)

### 🔹 Step 3: Mode & Water Level Selection Using Switch 4
Use short press on Switch 4 to navigate (scroll) between modes.
Use long press on Switch 4 to go to next screen for water level selection.
After water level selection, the screen prompts for:
Switch 5 = START
Switch 6 = STOP

![project3](https://github.com/user-attachments/assets/f0616c7a-79a2-4912-a242-f07f087b784d)

### 🔹 Step 4: Start or Stop the Process
If you press Switch 6 (STOP)  → Process cancels and restarts from mode selection.
If you press Switch 5 (START)  → Washing begins and timer starts running.

![project4](https://github.com/user-attachments/assets/d36de9f2-b171-4cba-ba6d-fd4bcc32ecd2)

### 🔹 Step 5: Door Open Detection with Buzzer Alert
If the door is open (Switch 1 long pressed), system:
Stops timer and motor
Sounds a buzzer
Displays: "Please close the door"
Once door is closed (Switch released), washing resumes.

![project5](https://github.com/user-attachments/assets/a0ffb9aa-e1af-48a4-bf9e-0472269f42e4)

### 🔹 Step 6: Washing Complete Message

After the countdown reaches 0, the system:
Sounds a buzzer
Displays:  
  "Program completed"  
  "Remove clothes"

 ![project6](https://github.com/user-attachments/assets/595c92ac-4611-475e-9640-4eedbfb18d45)

## File Structure

| File                        | Description                             |
|-----------------------------|---------------------------------------- |
| main.c, main.h              |  Main logic and control flow            |
| clcd.c, clcd.h              |  LCD display functions                  |
| timers.c, timers.h          |  Timer logic                            |
| digital_keypad.c, .h        |  Keypad inputs and switch handling      |
| washing_machine_fun_def.c   |  Washing process logic                  |
| washing_machine_header.h    |  Macros and constants                   |
| isr.c                       |  Interrupt handling (if any used)       |


## Tools Used
- MPLAB X IDE
- XC8 Compiler
- PICSimLab
- PIC Microcontroller (e.g., PIC16F877A)
  
## Author
Veera Lakshmi Geethika Gandham 
B.Tech – Cybersecurity & IoT with Blockchain 
SRKR Engineering College  
Emertxe Embedded Internship – 2025

✨ Thank you for visiting this project. Give it a ⭐ if you found it helpful!


 










