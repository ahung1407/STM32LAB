/*
 * test.c
 *
 *  Created on: Nov 26, 2024
 *      Author: Minh_Hung
 */


#include "test.h"


void led_test(){

	 HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		 HAL_Delay(200);
}
