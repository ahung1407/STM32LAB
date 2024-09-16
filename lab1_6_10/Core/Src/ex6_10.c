/*
 * ex6_10.c
 *
 *  Created on: Sep 12, 2024
 *      Author: admim
 */

#include "ex6_10.h"
void setNumberOnClock(int num) {
    if (num >= 0 && num <= 11)
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4<<num, GPIO_PIN_RESET);
    else
        return;
}
void clearAllClock() {
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_All, GPIO_PIN_SET);
}
int	hour = 0;
int	second = 0;
int	minute = 0;
void digitalClock(){

	if(second==60){
		second = 0;
		minute++;

	}
	if(minute==60){
		minute = 0;
		hour++;
	}
	if(hour==12){
		hour = 0;
	}

	int temp = second/5;
	int temp2 = minute/5;

	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4<<temp, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4<<temp2, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4<<hour, GPIO_PIN_RESET);\
	HAL_Delay(10);
	clearAllClock();
	second++;

}
