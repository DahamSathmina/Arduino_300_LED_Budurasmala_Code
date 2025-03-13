# Arduino 300 LED Budurasmala Code

## Overview
This project utilizes an Arduino to control 300 WS2812 individually addressable LEDs, leveraging the FastLED library for precise control and the SdFat library for retrieving dynamic lighting patterns stored on an SD card. This setup is ideal for creating immersive lighting effects for artistic installations, home decor, or interactive displays.

## Key Features
- **300 WS2812 LEDs Control**: Individually addressable RGB LEDs for vibrant animations.
- **SD Card Integration**: Reads predefined lighting patterns from `matrix.dat`.
- **Adjustable Brightness**: Dynamically controls brightness for different environments.
- **Scalability & Compatibility**: Supports multiple Arduino boards (Uno, Mega, etc.).
  
## Hardware Requirements
- **Microcontroller**: Arduino Uno, Mega, or compatible board
- **LED Strip**: WS2812 (300 LEDs or configurable length)
- **Storage**: MicroSD card (formatted FAT32) with an SD card module
- **Power Supply**: 5V, capable of handling LED power requirements
- **Connectivity**: Jumper wires for data and power transmission

## Software Requirements
- **Arduino IDE**: Required for code compilation and uploading
- **FastLED Library**: Manages LED strip animations
- **SdFat Library**: Enables efficient SD card access

## Setup & Installation
### 1. Preparing Your Environment
- Download and install the **Arduino IDE**.
- Install the required libraries:
  - Go to **Sketch** → **Include Library** → **Manage Libraries**.
  - Search and install **FastLED** and **SdFat**.

### 2. Hardware Wiring
| Component         | Arduino Pin |
|------------------|------------|
| WS2812 LED Data  | D8         |
| SD Card Module   | SPI Pins (CS, MOSI, MISO, SCK) |
| Power (5V)       | 5V Pin     |
| Ground (GND)     | GND        |

### 3. Uploading & Running the Code
1. Open the `Arduino_300_LED_Budurasmala_Code.ino` in Arduino IDE.
2. Connect your Arduino via USB and select the correct **Board** and **Port**.
3. Compile and upload the code.
4. Insert an SD card with `matrix.dat` for pattern display.
5. Power the system and observe the LED effects!

## Customization Options
- **Modify LED Count**: Change `#define NUM_LEDS 300` in the code.
- **Adjust Brightness**: Modify `FastLED.setBrightness(value);`.
- **Create Custom Patterns**: Modify `matrix.dat` to define new animations.( you can create Animations in **LED Matrix Studio** Softwere and Save file in **.dat** Format )


## Troubleshooting Guide
| Issue                        | Possible Cause & Solution |
|------------------------------|---------------------------|
| LEDs not lighting up         | Check wiring, power supply, and code settings |
| SD card not detected         | Ensure proper connections and FAT32 formatting |
| Flickering LEDs              | Use a more stable power source, reduce brightness |
| Patterns not updating        | Ensure `matrix.dat` is correctly formatted |

## Future Enhancements
- **Bluetooth/WiFi Support**: Enable remote control of LED patterns.
- **Real-time Audio Visualization**: Sync LEDs with music beats.
- **Mobile App Integration**: Create a user-friendly interface for pattern selection.
- **Multi-Zone LED Control**: Manage multiple LED strips independently.

## License
This project is open-source and free to use for personal and educational purposes. Contributions and improvements are encouraged!

