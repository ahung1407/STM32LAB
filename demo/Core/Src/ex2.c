/*
 * ex2.c
 *
 *  Created on: Sep 10, 2024
 *      Author: admim
 */

#include "ex2.h"
int count2 = 0;
void init_excercise2(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin, SET);
}
void run_excercise2(){
	if(count2 == 4){
		  	  HAL_GPIO_TogglePin(LED_RED_GPIO_Port,LED_RED_Pin);
		  	  HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin);
		  	  }
		  if(count2==7){
		  	  		HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin);
		  	  		HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin);

		  	  	  }
		  if(count2==9){
		  	  	  			count2 = 0;
		  	  	  			HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin);
		  	  	  			HAL_GPIO_TogglePin(LED_RED_GPIO_Port,LED_RED_Pin);
		  	  	  		}

		    	  count2++;
}
