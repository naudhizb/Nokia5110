/*
 * Nokia5110p.c
 *
 *  Created on: Jan 2, 2023
 *      Author: naudhizb
 */

#include "main.h"
#include "Nokia5110p.h"

extern SPI_HandleTypeDef hspi1;

void Nokia5110p_Delay(unsigned int ms)
{
	HAL_Delay(ms);
}

void Nokia5110p_Reset()
{
	HAL_GPIO_WritePin(RST_GPIO_Port, RST_Pin, GPIO_PIN_RESET);
	Nokia5110p_Delay(100);
	HAL_GPIO_WritePin(RST_GPIO_Port, RST_Pin, GPIO_PIN_SET);
}

void Nokia5110p_Init()
{

	/* Initialize GPIO, SPI and RESET */
	HAL_GPIO_WritePin(RST_GPIO_Port, RST_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(CE_GPIO_Port, CE_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(BL_GPIO_Port, BL_Pin, GPIO_PIN_SET);
	Nokia5110p_Reset();
}

void Nokia5110p_Send(unsigned char type, unsigned char data)
{
	/* Change Data/Command, Send Data */
	HAL_GPIO_WritePin(DC_GPIO_Port, DC_Pin, !!type);
	HAL_GPIO_WritePin(CE_GPIO_Port, CE_Pin, GPIO_PIN_RESET);
	HAL_SPI_Transmit(&hspi1, &data, 1, 100);
	HAL_GPIO_WritePin(CE_GPIO_Port, CE_Pin, GPIO_PIN_SET);
}

