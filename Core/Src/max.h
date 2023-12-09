#pragma once
#include <stdint.h>




#define I2C_DEFAULT_ADDRESS 0x36



#define REGISTER_VCELL      0x02
//Voltage: The VCELL register holds the measured cell voltage. You would read from this register to get the current voltage of the battery.

#define REGISTER_SOC        0x04
//Battery State (SOC): The SOC register provides the state of charge of the battery as calculated by the chip's algorithm. This value is a representation of the battery's charge relative to its capacity.

#define REGISTER_MODE       0x06
//Hibernation State: The MODE register can indicate whether the chip is in hibernation mode. There is a specific bit within this register that signals this state.


float read_voltage(I2C_HandleTypeDef *hi2c);