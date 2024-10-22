/*
 * automatic.c
 *
 *  Created on: Sep 23, 2024
 *      Author: admim
 */

#include "automatic.h"
#include "software_timer.h"

void init_automatic(){

}
void automatic_run(){
	switch(status){
	case INIT:
		if(1){
		status = GREEN_RED;
		setTimer(0, 5000);
		} // cau len chuyen trang thai
		break;
	case GREEN_RED:
		//TO DO
		//traffic_green_red(); // nen tach traffic.h va traffic.c
		if(isTimerExpired(0) == 1){
			status = AMBER_RED;
			setTimer(0, 2000);
		}
		if(isTimerExpired(2)==1){
			// Update display
			setTimer(2, 1000);
		}
		/*if(button1_flag == 1){
			status = MAN_GREEN_RED;
			button1_flag == 0;
			setTimer(1,10000);
			trong may trang thai can lam de kiem tra dau hieu chuyen trang thai
		}*/
			break;
	case AMBER_RED:
			break;
	case RED_GRREN:
			break;
	case RED_AMBER:
			break;
	default:
		break;
	}
}
