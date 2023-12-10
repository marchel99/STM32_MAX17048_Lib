# STM32_MAX17048 Library
STM32 library for interfacing with the MAX17048 LiPo battery fuel gauge, utilizing the STM32 HAL.

## Overview
This library provides an interface for the MAX17048 LiPo battery fuel gauge, tailored for STM32 microcontrollers using HAL. It allows for reading the battery voltage, state of charge (SoC), and the IC version.

## Functions

### read_voltage
Reads the battery voltage from the MAX17048.
float read_voltage(I2C_HandleTypeDef *hi2c);

read_soc
Reads the battery state of charge from the MAX17048.

c
Copy code
float read_soc(I2C_HandleTypeDef *hi2c);
Returns the state of charge as a percentage. If an error occurs, it returns -1.0f.

read_ic_version
Reads the IC version of the MAX17048.

c
Copy code
uint8_t read_ic_version(I2C_HandleTypeDef *hi2c);
Returns the IC version as a byte. If an error occurs, it returns 0xFF.

Usage
To use this library, include max.h in your project and pass the I2C handle to the functions.

Contributing
Feel free to fork the repository and submit pull requests to contribute to this library's development.

License
This library is distributed under the MIT License. See LICENSE for more information.
