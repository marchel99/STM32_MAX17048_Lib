#pragma once
#include <stdint.h>
// #include "stm32l4xx_hal_i2c.h"
#include "stm32l4xx_hal.h"

#define I2C_DEFAULT_ADDRESS 0x36
// Slave address

#define REGISTER_VCELL 0x02
// Voltage: The VCELL register holds the measured cell voltage. You would read from this register to get the current voltage of the battery.

#define REGISTER_SOC 0x04
// Battery State (SOC): The SOC register provides the state of charge of the battery as calculated by the chip's algorithm. This value is a representation of the battery's charge relative to its capacity.

#define REGISTER_MODE 0x06
// Hibernation State: The MODE register can indicate whether the chip is in hibernation mode. There is a specific bit within this register that signals this state.

#define REGISTER_VERSION 0x08
//

#define VALRT_MIN 0x14

#define VRESET 0x18

float read_voltage(I2C_HandleTypeDef *hi2c);

float read_current(I2C_HandleTypeDef *hi2c, float resistance);

float read_soc(I2C_HandleTypeDef *hi2c);

uint8_t read_ic_version(I2C_HandleTypeDef *hi2c);

void write_valrt_min(I2C_HandleTypeDef *hi2c, uint8_t valrt_min_value);

uint8_t read_valrt_min(I2C_HandleTypeDef *hi2c);

HAL_StatusTypeDef read_reset(I2C_HandleTypeDef *hi2c, uint8_t *reset_value);
