#include "max.h"
#include "i2c.h"

float read_voltage(I2C_HandleTypeDef *hi2c)
{
    uint8_t data[2];
    uint16_t raw_voltage;
    float voltage;

    // Read 2 bytes from the VCELL register
    HAL_StatusTypeDef status = HAL_I2C_Mem_Read(hi2c, I2C_DEFAULT_ADDRESS << 1, REGISTER_VCELL, I2C_MEMADD_SIZE_8BIT, data, sizeof(data), HAL_MAX_DELAY);

    if (status != HAL_OK)
    {
        // Handle error
        return -1.0f; // Indicate error
    }

    // Combine the two bytes to form a raw value
    raw_voltage = (data[0] << 8) | data[1];

    // Convert the raw value to voltage (value from data sheet * cell voltage resolution)
    voltage = raw_voltage * 78.125e-6; // 78.125 µV per LSB

    return voltage;
}

float read_soc(I2C_HandleTypeDef *hi2c)
{
    uint8_t data[2];
    float soc;

    // Odczyt 2 bajtów z rejestru SOC
    if (HAL_I2C_Mem_Read(hi2c, I2C_DEFAULT_ADDRESS << 1, REGISTER_SOC, I2C_MEMADD_SIZE_8BIT, data, sizeof(data), HAL_MAX_DELAY) == HAL_OK)
    {
        // Wartość SoC jest przechowywana jako 16-bitowa liczba, gdzie każdy bit odpowiada 1/256%
        soc = ((data[0] << 8) | data[1]) / 256.0f;
    }
    else
    {
        // W przypadku błędu zwróć -1.0f
        soc = -1.0f;
    }

    return soc;
}


uint8_t read_ic_version(I2C_HandleTypeDef *hi2c) {
    uint8_t version;
    uint8_t reg = REGISTER_VERSION; // Adres rejestru VERSION to 0x08

    // Odczyt 1 bajtu z rejestru VERSION
    HAL_StatusTypeDef status = HAL_I2C_Mem_Read(hi2c, I2C_DEFAULT_ADDRESS << 1, reg, I2C_MEMADD_SIZE_8BIT, &version, sizeof(version), HAL_MAX_DELAY);
    
    if (status != HAL_OK) {
        // W przypadku błędu zwróć 0xFF
        return 0xFF;
    }
    
    return version;
}
