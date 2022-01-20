/*****************************************
File  : clock_config.c
Autor : strefapic.blogspot.com
MCU   : STM32G071KBT6
IDE   : SEGGER Embedded Studio
******************************************/

#include <stm32g071xx.h>
#include "clock_config.h"

void CLOCK_MANAGER_Initialize(void){
/*
RCC->IOPENR |= RCC_IOPENR_GPIOAEN; //Open clock for GPIOA
RCC->IOPENR |= RCC_IOPENR_GPIOBEN; //Open clock for GPIOB
RCC->IOPENR |= RCC_IOPENR_GPIOCEN; //Open clock for GPIOC
RCC->APBENR1 |= RCC_APBENR1_I2C1EN ; //Open clock for I2C1
*/
RCC->APBENR1 |= RCC_APBENR1_TIM6EN;  // Enable the timer6 clock to delay
}