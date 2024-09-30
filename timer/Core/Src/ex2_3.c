/*
 * ex3.c
 *
 *  Created on: Sep 23, 2024
 *      Author: admim
 */


#include <ex2_3.h>
const unsigned scale = 500;
int status = ONE;
const int MAX_LED = 4;
 int index_led = 0;
 int led_buffer[4] = {1, 2, 3, 4};
void init_ex2(){
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, SET);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, SET);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, SET);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, SET);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, SET);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, SET);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, SET);
		setTimer(0, 1500);
		setTimer(1, 1000);
}

void run_ex2(){

	switch (status) {
		case ONE:
			if(isTimerExpired(0)==1){
			display7SEG(1);
			HAL_GPIO_WritePin(En1_GPIO_Port, En1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(En2_GPIO_Port, En2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(En3_GPIO_Port, En3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(En4_GPIO_Port, En4_Pin, GPIO_PIN_SET);
			status = TWO;
			setTimer(0, scale);
			}
			break;
		case TWO:
			if(isTimerExpired(0)==1){
			display7SEG(2);
			HAL_GPIO_WritePin(En1_GPIO_Port, En1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(En2_GPIO_Port, En2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(En3_GPIO_Port, En3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(En4_GPIO_Port, En4_Pin, GPIO_PIN_SET);
			status = THREE;
			setTimer(0, scale);

			}
			break;
		case THREE:
			if(isTimerExpired(0)==1){
				display7SEG(3);
				HAL_GPIO_WritePin(En1_GPIO_Port, En1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(En2_GPIO_Port, En2_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(En3_GPIO_Port, En3_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(En4_GPIO_Port, En4_Pin, GPIO_PIN_SET);
				status = FOUR;
				setTimer(0, scale);
			}
			break;
		case FOUR:
			if(isTimerExpired(0)==1){
				display7SEG(0);
				HAL_GPIO_WritePin(En1_GPIO_Port, En1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(En2_GPIO_Port, En2_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(En3_GPIO_Port, En3_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(En4_GPIO_Port, En4_Pin, GPIO_PIN_RESET);
				status = ONE;
				setTimer(0, scale);
			}
			break;
		default:
			break;
	}

}

void update7SEG(int index){
	switch (index) {
			case 1:
//				if(isTimerExpired(0)==1){
				display7SEG(led_buffer[0]);
				HAL_GPIO_WritePin(En1_GPIO_Port, En1_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(En2_GPIO_Port, En2_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(En3_GPIO_Port, En3_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(En4_GPIO_Port, En4_Pin, GPIO_PIN_SET);
				status = TWO;
				setTimer(0, scale);
//				}
				break;
			case 2:
//				if(isTimerExpired(0)==1){
				display7SEG(led_buffer[1]);
				HAL_GPIO_WritePin(En1_GPIO_Port, En1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(En2_GPIO_Port, En2_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(En3_GPIO_Port, En3_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(En4_GPIO_Port, En4_Pin, GPIO_PIN_SET);
				status = THREE;
				setTimer(0, scale);

//				}
				break;
			case 3:
//				if(isTimerExpired(0)==1){
					display7SEG(led_buffer[2]);
					HAL_GPIO_WritePin(En1_GPIO_Port, En1_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(En2_GPIO_Port, En2_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(En3_GPIO_Port, En3_Pin, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(En4_GPIO_Port, En4_Pin, GPIO_PIN_SET);
//					status = FOUR;
					setTimer(0, scale);
//	}
				break;
			case 4:
//				if(isTimerExpired(0)==1){
					display7SEG(led_buffer[3]);
					HAL_GPIO_WritePin(En1_GPIO_Port, En1_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(En2_GPIO_Port, En2_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(En3_GPIO_Port, En3_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(En4_GPIO_Port, En4_Pin, GPIO_PIN_RESET);
//					status = ONE;
					setTimer(0, scale);
//					}
			break;
			default:
				break;
		}

}

void DOT(){

	if(isTimerExpired(1)==1){
	 HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
	setTimer(1, 1000);}

}
void updateClockBuffer(int hour, int minute) {
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}
int run = 1;
void run_index(){
	if(isTimerExpired(0)==1){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	update7SEG(run);
	run++;
	if(run==5){
		run = 1;
	}
	setTimer(0, 500);
	}

}
