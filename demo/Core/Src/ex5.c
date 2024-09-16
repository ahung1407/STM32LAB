/*
 * ex5.c
 *
 *  Created on: Sep 12, 2024
 *      Author: admim
 */

#include "ex5.h"



void init_excercise5(){
	HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, SET);
	HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, SET);
	HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, SET);
	HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, SET);
	HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, SET);
	HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, SET);
	HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, SET);
}
void run_extra(int line2){
    switch (line2) {
        case 0:
            HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, RESET);
            HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, RESET);
            HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, RESET);
            HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, RESET);
            HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, RESET);
            HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, RESET);
            HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, SET);
            break;

        case 1:
            HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, SET);
            HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, RESET);
            HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, RESET);
            HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, SET);
            HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, SET);
            HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, SET);
            HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, SET);
            break;

        case 2:
            HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, RESET);
            HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, RESET);
            HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, SET);
            HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, RESET);
            HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, RESET);
            HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, SET);
            HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, RESET);
            break;

        case 3:
            HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, RESET);
            HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, RESET);
            HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, RESET);
            HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, RESET);
            HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, SET);
            HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, SET);
            HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, RESET);
            break;

        case 4:
            HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, SET);
            HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, RESET);
            HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, RESET);
            HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, SET);
            HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, SET);
            HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, RESET);
            HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, RESET);
            break;

        case 5:
            HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, RESET);
            HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, SET);
            HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, RESET);
            HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, RESET);
            HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, SET);
            HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, RESET);
            HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, RESET);
            break;

        case 6:
            HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, RESET);
            HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, SET);
            HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, RESET);
            HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, RESET);
            HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, RESET);
            HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, RESET);
            HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, RESET);
            break;

        case 7:
            HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, RESET);
            HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, RESET);
            HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, RESET);
            HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, SET);
            HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, SET);
            HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, SET);
            HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, SET);
            break;

        case 8:
            HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, RESET);
            HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, RESET);
            HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, RESET);
            HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, RESET);
            HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, RESET);
            HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, RESET);
            HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, RESET);
            break;

        case 9:
            HAL_GPIO_WritePin(LED_A1_GPIO_Port, LED_A1_Pin, RESET);
            HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, RESET);
            HAL_GPIO_WritePin(LED_C1_GPIO_Port, LED_C1_Pin, RESET);
            HAL_GPIO_WritePin(LED_D1_GPIO_Port, LED_D1_Pin, RESET);
            HAL_GPIO_WritePin(LED_E1_GPIO_Port, LED_E1_Pin, SET);
            HAL_GPIO_WritePin(LED_F1_GPIO_Port, LED_F1_Pin, RESET);
            HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, RESET);
            break;

        default:
            line2 = 0;
            break;
    }
}
int counter1 = 4;
int counter2 = 1;
int countex5 = 0;
void run_excercise5(){
	if(countex5==2){
					counter2 = 2;
				}
		if(countex5==5){
				counter1 = 1;
				counter2 = 4;
			}
		if(countex5==7){
			counter1 = 2;
		}
		if(countex5==10){
								countex5 = 0;
								counter2 = 1;
								counter1 = 4;
							}
			run_excercise4(counter1);
			run_extra(counter2);
			counter1--;
			counter2--;

	countex5++;




}

