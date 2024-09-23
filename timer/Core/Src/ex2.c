/*
 * ex2.c
 *
 *  Created on: Sep 22, 2024
 *      Author: admim
 */
#include "ex2.h"
void init_excercise2(){
	HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
	HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
	HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, SET);
	HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
	HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
	HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
	HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
	setTimer(0, 1000);
	setTimer(1, 1500);
}
void display7SEG(int counter){
	switch (counter) {
	 	 	 case 0:
	 	 		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
	 	 		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
	 	 		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
	 	 		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
	 	 		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
	 	 		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
	 	 		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);

		            break;
	 	 	 case 1:
	 	 		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
	 	 		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
	 	 		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
	 	 		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
	 	 		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
	 	 		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
	 	 		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);

		            break;
	        case 2:
	        	HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
	        	HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
	        	HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, SET);
	        	HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
	        	HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
	        	HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
	        	HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);

	            break;
	        case 3:
	            HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
	            HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
	            HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
	            HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
	            HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
	            HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
	            HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	            break;

	        case 4:
	            HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
	            HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
	            HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
	            HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
	            HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
	            HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
	            HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	            break;

	        case 5:
	            HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
	            HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
	            HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
	            HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
	            HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
	            HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
	            HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	            break;

	        case 6:
	            HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
	            HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
	            HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
	            HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
	            HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
	            HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
	            HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	            break;

	        case 7:
	            HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
	            HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
	            HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
	            HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
	            HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
	            HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
	            HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
	            break;

	        case 8:
	            HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
	            HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
	            HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
	            HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
	            HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, RESET);
	            HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
	            HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	            break;

	        case 9:
	            HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, RESET);
	            HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, RESET);
	            HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, RESET);
	            HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, RESET);
	            HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
	            HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, RESET);
	            HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, RESET);
	            break;

	        default:
			counter = 0;
			break;
		}
}

void run_excercise2(){
	if(isTimerExpired(0)==1){
		setTimer(0,500);
		display7SEG(1);
		HAL_GPIO_WritePin(En1_GPIO_Port, En1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(En2_GPIO_Port, En2_Pin, GPIO_PIN_SET);
	}
	if(isTimerExpired(1)==1){
		setTimer(1,500);
		display7SEG(2);
		HAL_GPIO_WritePin(En2_GPIO_Port, En2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(En1_GPIO_Port, En1_Pin, GPIO_PIN_SET);
	}
}
