/*
 * normal_state.h
 *
 *  Created on: Oct 26, 2024
 *      Author: admim
 */

#ifndef INC_NORMAL_STATE_H_
#define INC_NORMAL_STATE_H_
#include "global.h"
#include "automatic.h"
void init_green_red(void);
void init_amber_red(void);
void init_red_green(void);
void init_red_amber(void);

void init_man_red();
void init_man_yellow();
void init_man_green();
void display7SEG(int counter);
void update7SEG(int index);
void scanled();
void setmode1(int line1, int line2);
void setmodecus(int mode);
void setduration(int duration);
void decrease_time_mode1();
void model_2();
void clearbuffer();
void return_mode1();
void clearled();
#endif /* INC_NORMAL_STATE_H_ */
