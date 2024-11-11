/*
 * automatic.c
 *
 *  Created on: Sep 23, 2024
 *      Author: admim
 */

#include "automatic.h"

void init_automatic(){
	 	 HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, SET);    // Đỏ sáng - Line 1
	 	 HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, SET); // Vàng tắt - Line 1
	 	 HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, SET);   // Xanh tắt - Line 1

	    // Cấu hình Line 2
	    HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, SET); // Xanh sáng - Line 2
	    HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, SET); // Vàng tắt - Line 2
	    HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, SET);
}
void automatic_run(){
	switch(status){
	case INIT:
		init_automatic();
		setTimer(0, green_on);
		status = GREEN_RED;
		current_mode =  MODE_1;
		setmode1(red_state	,green_state);
		break;
	case GREEN_RED:
		init_green_red();
		break;
	case AMBER_RED:
		init_amber_red();
		break;
	case RED_GREEN:
		init_red_green();
		break;
	case RED_AMBER:
		init_red_amber();
		break;
	default:
		break;
	}
}
