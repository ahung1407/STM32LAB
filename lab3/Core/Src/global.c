/*
 * global.c
 *
 *  Created on: Sep 23, 2024
 *      Author: admim
 */

#include "global.h"

int status = 0;

int red_on = 5000, yellow_on = 3000, green_on=2000;

int led_buffer[4]={0};

int time_stage_2 = 4000;

int toggle_time_red = 500;
int toggle_time_yellow = 500;
int toggle_time_green = 500;
int update_time_red = 500;
int update_time_yellow = 500;
int update_time_green = 500;
int scan_led = 250;
int duration = 0;

int mode = 1;

int current_mode = 1;
