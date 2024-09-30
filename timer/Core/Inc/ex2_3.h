/*
 * ex3.h
 *
 *  Created on: Sep 23, 2024
 *      Author: admim
 */

#ifndef INC_EX2_3_H_
#define INC_EX2_3_H_
#include <ex1.h>
#include "main.h"
#include "software_timer.h"
#define ONE 1
#define TWO 2
#define THREE 3
#define FOUR 4

void init_ex2();

void run_ex2();

void update7SEG(int index);
void DOT();
void updateClockBuffer(int hour, int minute);
void run_index();

#endif /* INC_EX2_3_H_ */
