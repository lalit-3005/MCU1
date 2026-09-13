/*
 * stm32f4xx_drivers_GPIO.h
 *
 *  Created on: Jun 26, 2024
 *      Author: Asus
 */

#ifndef INC_STM32F4XX_DRIVERS_GPIO_H_
#define INC_STM32F4XX_DRIVERS_GPIO_H_

#include "stm32f407xx.h"


typedef struct
{
	uint8_t GPIO_PinNumber;
	uint8_t GPIO_PinMode;
	uint8_t GPIO_PinSpeed;
	uint8_t GPIO_PinPuPdControl;
	uint8_t GPIO_PinOPType;
	uint8_t GPIO_PinAltFunMode;
}GPIO_PinConfig_t;

typedef struct
{
	GPIO_RegDef_t* pGPIOx;
	GPIO_PinConfig_t GPIO_PinConfig;
}GPIO_Handle_t;
#endif /* INC_STM32F4XX_DRIVERS_GPIO_H_ */
