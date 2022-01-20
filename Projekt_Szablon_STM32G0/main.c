/*****************************************
File  : main.c
Autor : strefapic.blogspot.com
MCU   : STM32G071KBT6
IDE   : SEGGER Embedded Studio
******************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stm32g071xx.h>
#include "system_config.h"


volatile uint8_t intFlag = 0;

int main(void) {

SystemInit();
SYSTEM_MANAGER_Initialize();

SysTick_Config(16000000 * 0.5); //ok 0.5 s


while(1){

if(intFlag){ //flaga aktywowana w przerwaniu SysTick
     
      intFlag = 0; //zeruj flage 
               
     }
  }
}

/*Interrupt Handler for SysTick*/

void SysTick_Handler(void){
intFlag = 1;
}



/*
void EXTI0_1_IRQHandler(void){
intFlag = 1;
if(EXTI->FPR1 & EXTI_FPR1_FPIF1)
EXTI->FPR1 |= EXTI_FPR1_FPIF1; //clear pending
}
*/