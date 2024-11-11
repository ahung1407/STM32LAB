/*
 * global.h
 *
 *  Created on: Sep 23, 2024
 *      Author: admim
 */
#include "main.h"
#include"software_timer.h"
#include "button.h"
#include "normal_state.h"
#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#define INIT 1
#define GREEN_RED 2
#define AMBER_RED 3
#define RED_GREEN 4
#define RED_AMBER 5

extern int status;
extern int red_on, yellow_on, green_on;
extern int red_state, yellow_state, green_state;
extern int led_buffer[4];
extern int time_stage_2;
extern int toggle_time_red;
extern int toggle_time_yellow;
extern int toggle_time_green;
extern int scan_led;
extern int duration;
extern int mode;
extern int current_mode;
extern int update_time_red;
extern int update_time_yellow;
extern int update_time_green;
#define MAN_RED 13
#define MAN_GREEN 14
#define MAN_YELLOW 15

#define MODE_1 19
#define CUS_MODE 20






#endif /* INC_GLOBAL_H_ */
