/*
 * ex3.c
 *
 *  Created on: Sep 11, 2024
 *      Author: admim
 */

#include "ex3.h"
int count3 = 0;

void init_excercise3(){

	//line 1
		HAL_GPIO_WritePin(LED_1_GPIO_Port,LED_1_Pin, RESET);// do sang line 1
		HAL_GPIO_WritePin(LED_2_GPIO_Port,LED_2_Pin, SET); // vang line 1
		HAL_GPIO_WritePin(LED_3_GPIO_Port,LED_3_Pin, SET); // xanh line 1
	  // line 2
		HAL_GPIO_WritePin(LED_6_GPIO_Port,LED_6_Pin, RESET); // xanh sang line 2
		HAL_GPIO_WritePin(LED_5_GPIO_Port,LED_5_Pin, SET); // yellow line 2
		HAL_GPIO_WritePin(LED_4_GPIO_Port,LED_4_Pin, SET); // red line 2
}
void run_excercise3(){
				if(count3 == 2){
				  	  HAL_GPIO_TogglePin(LED_6_GPIO_Port,LED_6_Pin);
				  	  HAL_GPIO_TogglePin(LED_5_GPIO_Port,LED_5_Pin);
				  	  }

				if(count3 == 5){
				  	  HAL_GPIO_TogglePin(LED_1_GPIO_Port,LED_1_Pin);
				  	  HAL_GPIO_TogglePin(LED_3_GPIO_Port,LED_3_Pin);
				  	  HAL_GPIO_TogglePin(LED_5_GPIO_Port,LED_5_Pin);
				  	  HAL_GPIO_TogglePin(LED_4_GPIO_Port,LED_4_Pin);
				  	  }
				  if(count3 == 7){

				  	  		HAL_GPIO_TogglePin(LED_3_GPIO_Port,LED_3_Pin);
				  	  		HAL_GPIO_TogglePin(LED_2_GPIO_Port,LED_2_Pin);
				  	  	  }
				  if(count3==10){
				  	  	  			count3 = 0;
				  	  	  			HAL_GPIO_TogglePin(LED_2_GPIO_Port,LED_2_Pin);
				  	  	  			HAL_GPIO_TogglePin(LED_1_GPIO_Port,LED_1_Pin);
				  	  	  			HAL_GPIO_TogglePin(LED_6_GPIO_Port,LED_6_Pin);
				  	  	  			HAL_GPIO_TogglePin(LED_4_GPIO_Port,LED_4_Pin);
				  	  	  		}

				    	  count3++;
}

