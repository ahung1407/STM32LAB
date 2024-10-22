/*
 * DHT20.c
 *
 *  Created on: Sep 29, 2024
 *      Author: admim
 */

#include "DHT20.h"



void Set_Pin_Output (GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
	GPIO_InitTypeDef GPIO_InitStruct = {0};
	GPIO_InitStruct.Pin = GPIO_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOx, &GPIO_InitStruct);
}

void Set_Pin_Input (GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
	GPIO_InitTypeDef GPIO_InitStruct = {0};
	GPIO_InitStruct.Pin = GPIO_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
	GPIO_InitStruct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOx, &GPIO_InitStruct);
}



void DHT20_Start (void)
{
	Set_Pin_Output(DHT20_PORT, DHT20_PIN); // set the pin as output
	HAL_GPIO_WritePin (DHT20_PORT, DHT20_PIN, 0);   // pull the pin low
	 HAL_Delay(1200);   // wait for > 1ms

	HAL_GPIO_WritePin (DHT20_PORT, DHT20_PIN, 1);   // pull the pin high
	 HAL_Delay (20);   // wait for 30us

	Set_Pin_Input(DHT20_PORT, DHT20_PIN);   // set as input
}


uint8_t  DHT20_Check_Response (void)
{
	Set_Pin_Input( DHT20_PORT,  DHT20_PIN);   // set as input
	uint8_t Response = 0;
	 HAL_Delay (40);  // wait for 40us
	if (!(HAL_GPIO_ReadPin ( DHT20_PORT,  DHT20_PIN))) // if the pin is low
	{
		 HAL_Delay (80);   // wait for 80us

		if ((HAL_GPIO_ReadPin ( DHT20_PORT,  DHT20_PIN))) Response = 1;  // if the pin is high, response is ok
		else Response = -1;
	}

	while ((HAL_GPIO_ReadPin ( DHT20_PORT,  DHT20_PIN)));   // wait for the pin to go low
	return Response;
}

uint8_t  DHT20_Read (void)
{
	uint8_t i,j;
	for (j=0;j<8;j++)
	{
		while(!(HAL_GPIO_ReadPin ( DHT20_PORT,  DHT20_PIN)));   // wait for the pin to go high
		 HAL_Delay (40);   // wait for 40 us

		if (!(HAL_GPIO_ReadPin ( DHT20_PORT,  DHT20_PIN)))   // if the pin is low
		{
			i&= ~(1<<(7-j));   // write 0
		}
		else i|= (1<<(7-j));  // if the pin is high, write 1
		while ((HAL_GPIO_ReadPin ( DHT20_PORT,  DHT20_PIN)));  // wait for the pin to go low
	}

	return i;
}
