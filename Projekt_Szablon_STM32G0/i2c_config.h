/*****************************************
File  : i2c_config.h
Autor : strefapic.blogspot.com
MCU   : STM32G071KBT6
IDE   : SEGGER Embedded Studio
******************************************/

#ifndef I2C_CONFIG_H
#define  I2C_CONFIG_H


void I2C1_MANAGER_Initialize(void);

//void I2C1_Write(uint8_t slaveAdress, uint8_t registerAdress, uint8_t data);
//uint8_t I2C1_Read(uint8_t slaveAdress, uint8_t registerAdress);

void I2C2_MANAGER_Initialize(void);

#endif /*I2C_CONFIG_H*/