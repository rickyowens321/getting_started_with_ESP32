# ESP32 LED Blinking Project
This project demonstrates how to blink the built-in LED on an ESP32 development board using the ESP-IDF framework.

## Overview
The ESP32 board usually has a built-in LED connected to GPIO pin number 2. In this example, we configure this GPIO as an output to control the LED's state. The program then enters an infinite loop where it toggles the LED on and off every second, providing visual feedback through the LED blink.

## Code Breakdown
1. Header Files:
    + `<stdio.h>`: Standard input-output header for functions like `printf`.
    + `"driver/gpio.h"`: Header file for the GPIO driver functions provided by ESP-IDF.
    + `"esp_system.h"`: Provides system-specific functions, including `ets_delay_us` for microsecond delays.
2. Macro Definitions:
    + `#define builtin_led GPIO_NUM_2`: This defines a macro to replace `builtin_led` with `GPIO_NUM_2`, which represents the GPIO number where the built-in LED is connected.
3. Main Function:
    + `void app_main(void)`: The entry point of the program when running on the ESP32.
4. Program Flow:
    + `gpio_set_direction`: This function sets the direction (input or output) of a specified GPIO. Here, it's used to set the built-in LED's GPIO as an output.
    + An infinite while loop is used to keep toggling the LED's state:
        + `gpio_set_level`: Sets the level (high or low) of a specified GPIO. A high level turns the LED on, and a low level turns it off.
        + `ets_delay_us`: Introduces a delay in microseconds. In this example, it delays for 1,000,000 microseconds (or 1 second) between toggling the LED's state.

## Building and Running
+ Navigate to the project directory.
+ Use idf.py menuconfig to configure the project.
+ Compile the project using idf.py build.
+ Flash the compiled program onto your ESP32 with idf.py -p [PORT] flash, replacing [PORT] with your ESP32's    serial port.
+ Once flashed, the ESP32's built-in LED should start blinking.