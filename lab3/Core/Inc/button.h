/*
 * button.h
 *
 *  Created on: Oct 16, 2024
 *      Author: admim
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
#include "main.h"
#include "software_timer.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET


void getkeyinput();
void subKeyProcess();

#endif /* INC_BUTTON_H_ */
