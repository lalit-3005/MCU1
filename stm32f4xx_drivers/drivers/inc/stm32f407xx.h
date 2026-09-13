/*
 * stm32f407xx.h
 *
 *  Created on: Feb 21, 2024
 *      Author: Asus
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

#include <stdint.h>

#define __vo volatile
/**************************************/
#define FLASH_BASEADDR		0x08000000U		/* FLASH base addr*/
#define SRAM1_BASEADDR 		0x20000000U		/* SRAM1 base addr 112kB*/
#define SRAM2_BASEADDR 		0x2001C000U		/* SRAM2 base addr 112*1024*/
#define ROM_BASEADDR 		0x1FFF0000U		/* ROM/System memory base addr */

/* BUS peripheral base addr */

#define PERIPH_BASE			0x4000000U
#define APB1PERIPH_BUS		PERIPH_BASE
#define APB2PERIPH_BUS		0x40010000U
#define AHB1PERIPH_BUS		0x40020000U
#define AHB2PERIPH_BUS		0x50000000U

/* AHB1 GPIO peripherals */

#define GPIOA_BASEADDR 		(AHB1PERIPH_BUS + 0x0000)
#define GPIOB_BASEADDR 		(AHB1PERIPH_BUS + 0x0400)
#define GPIOC_BASEADDR 		(AHB1PERIPH_BUS + 0x0800)
#define GPIOD_BASEADDR 		(AHB1PERIPH_BUS + 0x0C00)
#define GPIOE_BASEADDR 		(AHB1PERIPH_BUS + 0x1000)
#define GPIOF_BASEADDR 		(AHB1PERIPH_BUS + 0x1400)
#define GPIOG_BASEADDR 		(AHB1PERIPH_BUS + 0x1800)
#define GPIOH_BASEADDR 		(AHB1PERIPH_BUS + 0x1C00)
#define GPIOI_BASEADDR 		(AHB1PERIPH_BUS + 0x2000)
#define GPIOJ_BASEADDR 		(AHB1PERIPH_BUS + 0x2400)
#define GPIOK_BASEADDR 		(AHB1PERIPH_BUS + 0x2800)

#define RCC_BASEADDR		(AHB1PERIPH_BUS + 0x3800)

/* APB1 peripherals */

#define I2S2ext_BASEADDR 	(APB1PERIPH_BUS + 0x3400)

#define SPI2_BASEADDR		(APB1PERIPH_BUS + 0x3800)
#define SPI3_BASEADDR		(APB1PERIPH_BUS + 0x3C00)

#define I2S3ext_BASEADDR	(APB1PERIPH_BUS + 0x4000)

#define USART2_BASEADDR		(APB1PERIPH_BUS + 0x4400)
#define USART3_BASEADDR		(APB1PERIPH_BUS + 0x4800)
#define UART4_BASEADDR		(APB1PERIPH_BUS + 0x4C00)
#define UART5_BASEADDR		(APB1PERIPH_BUS + 0x5000)

#define I2C1_BASEADDR		(APB1PERIPH_BUS + 0x5400)
#define I2C2_BASEADDR		(APB1PERIPH_BUS + 0x5800)
#define I2C3_BASEADDR		(APB1PERIPH_BUS + 0x5C00)

#define UART7_BASEADDR		(APB1PERIPH_BUS + 0x7800)
#define UART8_BASEADDR		(APB1PERIPH_BUS + 0x7C00)

/* APB2 peripherals */

#define USART1_BASEADDR		(APB2PERIPH_BUS + 0x1000)
#define USART6_BASEADDR		(APB2PERIPH_BUS + 0x1400)

#define SPI1_BASEADDR		(APB2PERIPH_BUS + 0x3000)
#define SPI4_BASEADDR		(APB2PERIPH_BUS + 0x3400)

#define SYSCFG_BASEADDR		(APB2PERIPH_BUS + 0x3800)
#define EXTI_BASEADDR		(APB1PERIPH_BUS + 0x3C00)

/* Peripheral Structure*/
typedef struct
{
	__vo uint32_t MODER; 			/*	GPIO port mode register					Address offset: 0x00	*/
	__vo uint32_t OTYPER;			/*	GPIO port output type register			Address offset: 0x04	*/
	__vo uint32_t OSPEEDR;			/* 	GPIO port output speed register			Address offset: 0x08    */
	__vo uint32_t PUPDR;			/* 	GPIO port pull-up/pull-down register	Address offset: 0x0C    */
	__vo uint32_t IDR;				/* 	GPIO port input data register		    Address offset: 0x10    */
	__vo uint32_t ODR;				/*  GPIO port output data register		    Address offset: 0x14    */
	__vo uint32_t BSRR;				/* 	GPIO port bit set/reset register		Address offset: 0x18    */
	__vo uint32_t LCKR;				/*  GPIO port configuration lock register   Address offset: 0x1C    */
	__vo uint32_t AFRL;				/* 	GPIO alternate function low register	Address offset: 0x20    */
	__vo uint32_t AFRH;				/*  GPIO alternate function high register	Address offset: 0x24    */
}GPIO_RegDef_t;

typedef struct
{
	__vo uint32_t CR; 				/*RCC clock control register									Address offset: 0x00	*/
	__vo uint32_t PLLCFGR;			/*	RCC PLL configuration register								Address offset: 0x04	*/
	__vo uint32_t CFGR;				/* 	RCC clock configuration register							Address offset: 0x08    */
	__vo uint32_t CIR;				/* 	RCC clock interrupt register								Address offset: 0x0C    */
	__vo uint32_t AHB1RSTR;			/* 	RCC AHB1 peripheral reset register		    				Address offset: 0x10    */
	__vo uint32_t AHB2RSTR;			/*  RCC AHB2 peripheral reset register		   					Address offset: 0x14    */
	__vo uint32_t AHB3RSTR;			/* 	RCC AHB3 peripheral reset register							Address offset: 0x18    */
	__vo uint32_t RESERVED;
	__vo uint32_t APB1RSTR;			/*  RCC APB1 peripheral reset register   						Address offset: 0x20    */
	__vo uint32_t APB2RSTR;			/* 	RCC APB2 peripheral reset register							Address offset: 0x24    */
	__vo uint32_t RESERVED1[2];
	__vo uint32_t AHB1ENR;			/*  RCC AHB1 peripheral clock register							Address offset: 0x30    */
	__vo uint32_t AHB2ENR;			/*  RCC AHB2 peripheral clock enable register					Address offset: 0x34    */
	__vo uint32_t AHB3ENR;			/* RCC AHB3 peripheral clock enable register					Address offset: 0x38    */
	__vo uint32_t RESERVED2;
	__vo uint32_t APB1ENR;			/* RCC APB1 peripheral clock enable register					Address offset: 0x40    */
	__vo uint32_t APB2ENR;			/* RCC APB2 peripheral clock enable register					Address offset: 0x44    */
	__vo uint32_t RESERVED3[2];
	__vo uint32_t AHB1LPENR;		/* RCC AHB1 peripheral clock enable in low power mode register	Address offset: 0x50    */
	__vo uint32_t AHB2LPENR;		/* RCC AHB2 peripheral clock enable in low power mode register	Address offset: 0x54    */
	__vo uint32_t AHB3LPENR;		/*RCC AHB3 peripheral clock enable in low power mode register	Address offset: 0x58    */
	__vo uint32_t RESERVED4;
	__vo uint32_t APB1LPENR;		/* RCC APB1 peripheral clock enable in low power mode register	Address offset: 0x60    */
	__vo uint32_t APB2LPENR;		/* RCC APB2 peripheral clock enabled in low power mode register	Address offset: 0x64    */
	__vo uint32_t RESERVED5[2];
	__vo uint32_t BDCR;				/* RCC Backup domain control register							Address offset: 0x70    */
	__vo uint32_t CSR;				/* RCC clock control & status register							Address offset: 0x74    */
	__vo uint32_t RESERVED6[2];
	__vo uint32_t SSCGR;			/* RCC spread spectrum clock generation register				Address offset: 0x80    */
	__vo uint32_t PLLI2SCFGR;		/* RCC PLLI2S configuration register 							Address offset: 0x84    */
	__vo uint32_t PLLSAICFGR;		/* RCC PLL configuration register								Address offset: 0x88    */
	__vo uint32_t DCKCFGR;			/* RCC Dedicated Clock Configuration Register					Address offset: 0x8C    */

}RCC_RegDef_t;


/*
 * Peripheral Defination
 */

#define GPIOA		((GPIO_RegDef_t*)GPIOA_BASEADDR)
#define GPIOB		((GPIO_RegDef_t*)GPIOB_BASEADDR)
#define GPIOC		((GPIO_RegDef_t*)GPIOC_BASEADDR)
#define GPIOD		((GPIO_RegDef_t*)GPIOD_BASEADDR)
#define GPIOE		((GPIO_RegDef_t*)GPIOE_BASEADDR)
#define GPIOF		((GPIO_RegDef_t*)GPIOF_BASEADDR)
#define GPIOG		((GPIO_RegDef_t*)GPIOG_BASEADDR)
#define GPIOH		((GPIO_RegDef_t*)GPIOH_BASEADDR)
#define GPIOI		((GPIO_RegDef_t*)GPIOI_BASEADDR)
#define GPIOJ		((GPIO_RegDef_t*)GPIOJ_BASEADDR)
#define GPIOK		((GPIO_RegDef_t*)GPIOK_BASEADDR)

#define RCC			((RCC_RegDef_t*)RCC_BASEADDR)
/*
 * Clock Enable MACRO for GPIOx peripherals
 */
#define GPIOA_PCLK_EN 	(RCC->AHB1ENR |= (1 << 0))
#define GPIOB_PCLK_EN 	(RCC->AHB1ENR |= (1 << 1))
#define GPIOC_PCLK_EN 	(RCC->AHB1ENR |= (1 << 2))
#define GPIOD_PCLK_EN 	(RCC->AHB1ENR |= (1 << 3))
#define GPIOE_PCLK_EN 	(RCC->AHB1ENR |= (1 << 4))
#define GPIOF_PCLK_EN 	(RCC->AHB1ENR |= (1 << 5))
#define GPIOG_PCLK_EN 	(RCC->AHB1ENR |= (1 << 6))
#define GPIOH_PCLK_EN 	(RCC->AHB1ENR |= (1 << 7))
#define GPIOI_PCLK_EN 	(RCC->AHB1ENR |= (1 << 8))
#define GPIOJ_PCLK_EN 	(RCC->AHB1ENR |= (1 << 9))
#define GPIOK_PCLK_EN 	(RCC->AHB1ENR |= (1 << 10))

/*
 * Clock Disable MACRO for GPIOx peripherals
 */
#define GPIOA_PCLK_DI 	(RCC->AHB1ENR &= ~(1 << 0))
#define GPIOB_PCLK_DI 	(RCC->AHB1ENR &= ~(1 << 1))
#define GPIOC_PCLK_DI 	(RCC->AHB1ENR &= ~(1 << 2))
#define GPIOD_PCLK_DI 	(RCC->AHB1ENR &= ~(1 << 3))
#define GPIOE_PCLK_DI 	(RCC->AHB1ENR &= ~(1 << 4))
#define GPIOF_PCLK_DI 	(RCC->AHB1ENR &= ~(1 << 5))
#define GPIOG_PCLK_DI 	(RCC->AHB1ENR &= ~(1 << 6))
#define GPIOH_PCLK_DI 	(RCC->AHB1ENR &= ~(1 << 7))
#define GPIOI_PCLK_DI 	(RCC->AHB1ENR &= ~(1 << 8))
#define GPIOJ_PCLK_DI 	(RCC->AHB1ENR &= ~(1 << 9))
#define GPIOK_PCLK_DI 	(RCC->AHB1ENR &= ~(1 << 10))


#endif /* INC_STM32F407XX_H_ */
