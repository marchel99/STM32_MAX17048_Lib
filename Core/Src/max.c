#include "max.h"
#include "i2c.h"


float read_voltage(I2C_HandleTypeDef *hi2c) {
    uint8_t data[2];
    uint16_t raw_voltage;
    float voltage;

    // Read 2 bytes from the VCELL register
    HAL_StatusTypeDef status = HAL_I2C_Mem_Read(hi2c, I2C_DEFAULT_ADDRESS << 1, REGISTER_VCELL, I2C_MEMADD_SIZE_8BIT, data, sizeof(data), HAL_MAX_DELAY);
    
    if (status != HAL_OK) {
        // Handle error
        return -1.0f; // Indicate error
    }
    
    // Combine the two bytes to form a raw value
    raw_voltage = (data[0] << 8) | data[1];
    
    // Convert the raw value to voltage (value from data sheet * cell voltage resolution)
    voltage = raw_voltage * 78.125e-6;  // 78.125 µV per LSB
    
    return voltage;
}