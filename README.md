# STM32_MAX17048 Library
STM32 library for interfacing with the MAX17048 LiPo battery fuel gauge, utilizing the STM32 HAL.

## Overview
This library provides an interface for the MAX17048 LiPo battery fuel gauge, tailored for STM32 microcontrollers using HAL. It allows for reading the battery voltage, state of charge (SoC), and the IC version.

## Getting Started
To use this library, clone the repository or download the source files into your project directory.

```
git clone https://github.com/yourusername/STM32_MAX17048_Lib.git
```



## Functions

### read_voltage
Reads the battery voltage from the MAX17048.
```
// Initialize I2C
I2C_HandleTypeDef hi2c1;

// Read and print the battery voltage
float battery_voltage = read_voltage(&hi2c1);
printf("Battery Voltage: %.2f V\n", battery_voltage);
```

### read_soc
Returns the state of charge as a percentage. If an error occurs, it returns -1.0f.
```
// Read and print the battery state of charge
float battery_soc = read_soc(&hi2c1);
printf("Battery SoC: %.2f %%\n", battery_soc);
```


### read_ic_version
Returns the IC version as a byte. If an error occurs, it returns 0xFF.
```
// Read and print the IC version
uint8_t ic_version = read_ic_version(&hi2c1);
printf("IC Version: 0x%X\n", ic_version);
```


## Usage
To use this library, include max.h, max.c in your project and pass the I2C handle to the functions.

## Contributing
Feel free to fork the repository and submit pull requests to contribute to this library's development.

## License
This library is distributed under the MIT License. See LICENSE for more information.
