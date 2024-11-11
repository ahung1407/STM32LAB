/*
 * software_timer.h
 *
 *  Created on: Sep 21, 2024
 *      Author: admim
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int	timer1_flag;

void setTimer(int index, int counter);
void timerRun();
int isTimerExpired(int index);

#endif /* INC_SOFTWARE_TIMER_H_ */
