/*
 * manual.c
 *
 *  Created on: Sep 23, 2024
 *      Author: admim
 */

#include "manual.h"



void init_manu(){

}

void run_manu(){
	switch(status){
	case MAN_RED:
		init_man_red();
		break;
	case MAN_YELLOW:
		init_man_yellow();

			break;
	case MAN_GREEN:
		init_man_green();


			break;

	default:

		break;
	}
}


void switch_mode(){
	switch(current_mode){
		case MODE_1:
			decrease_time_mode1();
			break;
		case CUS_MODE:
		setmodecus(mode);
		model_2();
		setduration(duration);
				break;
		default:

				break;
			}
}
