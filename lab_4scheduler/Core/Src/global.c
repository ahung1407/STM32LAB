/*
 * global.c
 *
 *  Created on: Sep 23, 2024
 *      Author: admim
 */

#include "global.h"

int status = 0;

int red_on = 5000, yellow_on = 3000, green_on=2000;
int red_state = 5, yellow_state = 3, green_state = 2;
int led_buffer[4]={0};

int time_stage_2 = 10000;

int toggle_time_red = 500;
int toggle_time_yellow = 500;
int toggle_time_green = 500;
int update_time_red = 500;
int update_time_yellow = 500;
int update_time_green = 500;
int scan_led = 200;
int duration = 0;
int counter_green_on = 8;
int counter_amber_on = 12;
int mode = 1;

int current_mode = 1;
