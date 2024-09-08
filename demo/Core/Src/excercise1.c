/*
 * excercise1.c
 *
 *  Created on: Sep 6, 2024
 *      Author: admim
 */
#include "excercise1.h"
int count = 0;
void init_excercise1(){

	  HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin, SET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin, RESET);
}
void run_excercise1(){
	if(count >=2){
		  HAL_GPIO_TogglePin(LED_RED_GPIO_Port,LED_RED_Pin);
		  HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin);
		  count = 0;
	  }

	  	  count++;
}
