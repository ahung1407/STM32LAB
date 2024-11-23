/*
 * normal_state.c
 *
 *  Created on: Oct 26, 2024
 *      Author: admim
 */
#include "normal_state.h"
void display7SEG(int counter) {

    switch (counter) {
        case 0:
            HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
            HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
            HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
            HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
            HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
            HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, RESET);
            HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, SET);
            break;

        case 1:
            HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, SET);
            HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
            HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
            HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
            HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
            HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, SET);
            HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, SET);
            break;

        case 2:
            HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
            HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
            HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
            HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
            HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
            HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, SET);
            HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, RESET);
            break;

        case 3:
            HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
            HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
            HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
            HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
            HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
            HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, SET);
            HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, RESET);
            break;

        case 4:
            HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, SET);
            HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
            HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
            HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
            HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
            HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, RESET);
            HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, RESET);
            break;

        case 5:
            HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
            HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, SET);
            HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
            HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
            HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
            HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, RESET);
            HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, RESET);
            break;

        case 6:
            HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
            HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, SET);
            HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
            HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
            HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
            HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, RESET);
            HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, RESET);
            break;

        case 7:
            HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
            HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
            HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
            HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
            HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
            HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, SET);
            HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, SET);
            break;

        case 8:
            HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
            HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
            HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
            HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
            HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
            HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, RESET);
            HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, RESET);
            break;

        case 9:
            HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
            HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
            HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
            HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
            HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
            HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, RESET);
            HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, RESET);
            break;

        default:
            counter = 0;
            break;
    }
}
void clearled(){
	HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, SET);
	HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, SET);
	HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
	HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
	HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
	HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, SET);
	HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, SET);

}
void clearbuffer(){
	led_buffer[0] = 0;
		led_buffer[1] = 0;
		led_buffer[2] = 0;
		led_buffer[3] = 0;
}
void update7SEG(int index){
	switch (index) {
			case 1:
//
				display7SEG(led_buffer[0]);
				HAL_GPIO_WritePin(En1_GPIO_Port, En1_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(En2_GPIO_Port, En2_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(En3_GPIO_Port, En3_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(En4_GPIO_Port, En4_Pin, GPIO_PIN_SET);
//
				break;
			case 2:
//				if(isTimerExpired(0)==1){
				display7SEG(led_buffer[1]);
				HAL_GPIO_WritePin(En1_GPIO_Port, En1_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(En2_GPIO_Port, En2_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(En3_GPIO_Port, En3_Pin, GPIO_PIN_SET);
				HAL_GPIO_WritePin(En4_GPIO_Port, En4_Pin, GPIO_PIN_SET);
//				}
				break;
			case 3:
//				if(isTimerExpired(0)==1){
					display7SEG(led_buffer[2]);
					HAL_GPIO_WritePin(En1_GPIO_Port, En1_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(En2_GPIO_Port, En2_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(En3_GPIO_Port, En3_Pin, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(En4_GPIO_Port, En4_Pin, GPIO_PIN_SET);
//	}
				break;
			case 4:
//				if(isTimerExpired(0)==1){
					display7SEG(led_buffer[3]);
					HAL_GPIO_WritePin(En1_GPIO_Port, En1_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(En2_GPIO_Port, En2_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(En3_GPIO_Port, En3_Pin, GPIO_PIN_SET);
					HAL_GPIO_WritePin(En4_GPIO_Port, En4_Pin, GPIO_PIN_RESET);
//					}
			break;
			default:
				break;
		}

}
int run = 1;
void scanled(){
		//clearled();
		update7SEG(run);
		run++;
		if(run>4){
			run = 0;
		}

}
int counter_led = 5;
void led_test(){
	counter_led--;

	if(counter_led==0){
		counter_led = 5;
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	}
}
void return_mode1(){
	if(buttonFlags[2]==1){
		buttonFlags[2]=0;
		status = GREEN_RED;
		//setTimer(0, green_on);
		counter_green_on= green_state*4;
		setmode1(red_state,green_state);
		init_automatic();
		current_mode = MODE_1;
	}
}
void setmode1(int line1, int line2){
	clearbuffer();
	led_buffer[0] = line1/10;
	led_buffer[1] = line1%10;

	led_buffer[2] = line2/10;
	led_buffer[3] = line2%10;
}
int counter_decrese = 4;
void decrease_time_mode1(){
	counter_decrese--;
	if(counter_decrese==0){
		if(led_buffer[0]!=0){
		led_buffer[0]--;}
		if(led_buffer[1]!=0){
				led_buffer[1]--;}
		if(led_buffer[2]!=0){
				led_buffer[2]--;}
		if(led_buffer[3]!=0){
				led_buffer[3]--;}
		counter_decrese=4;
	}
}

void setmodecus(int mode_cus){
	mode = mode_cus;
	led_buffer[0] = 0;
	led_buffer[1] = 0;
	led_buffer[2] = 0;
	led_buffer[3] = 0;
	led_buffer[0] = mode/10;
	led_buffer[1] = mode%10;
}


void setduration(int duration){
	led_buffer[2] = 0;
	led_buffer[3] = 0;
	led_buffer[2] = duration/10;
	led_buffer[3] = duration%10;
}
void init_green_red(void){
			HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, RESET);    // Đỏ sáng - Line 1
		 	 HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, SET); // Vàng tắt - Line 1
		 	 HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, SET);   // Xanh tắt - Line 1
		    // Cấu hình Line 2
		    HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, RESET); // Xanh sáng - Line 2
		    HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, SET); // Vàng tắt - Line 2
		    HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, SET);
		    counter_green_on--;
		   if(counter_green_on==0){
			   	//setTimer(0, yellow_on);
			   	counter_amber_on = yellow_state*4;
		        status = AMBER_RED;
		        setmode1(yellow_state,yellow_state);
			}
		   if(buttonFlags[0]==1){
			   status = MAN_RED;
			   init_automatic();
			   //setTimer(0, time_stage_2);
			   time_stage_2 = 40;
			   update_time_red = 2;
			   clearbut();
			   HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, RESET);
			   	HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, RESET);
			   	current_mode = CUS_MODE;
			   	setmodecus(2);
			   	duration = 0;
		   }

}
void init_amber_red(void){ // on vang
				HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, RESET);    // Đỏ sáng - Line 1
			 	 HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, SET); // Vàng tắt - Line 1
			 	 HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, SET);   // Xanh tắt - Line 1
			 	 counter_amber_on--;
			    // Cấu hình Line 2
			    HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, SET); // Xanh sáng - Line 2
			    HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, RESET); // Vàng tắt - Line 2
			    HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, SET);
	if(counter_amber_on==0){
		//setTimer(0, green_on);
		counter_green_on= green_state*4;
		status = RED_GREEN;
		setmode1(green_state,red_state);
	}
}
void init_red_green(void){
				HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, SET);    // Đỏ sáng - Line 1
			 	 HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, SET); // Vàng tắt - Line 1
			 	 HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, RESET);   // Xanh tắt - Line 1

			    // Cấu hình Line 2
			    HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, SET); // Xanh sáng - Line 2
			    HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, SET); // Vàng tắt - Line 2
			    HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, RESET);
			    counter_green_on--;
	if(counter_green_on==0){
		 	 	   // on do line 2
				setmode1(yellow_state,yellow_state);
				counter_amber_on = yellow_state*4;
		        status = RED_AMBER;
	}
}
void init_red_amber(void){
				HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, SET);    // Đỏ sáng - Line 1
			 	 HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, RESET); // Vàng tắt - Line 1
			 	 HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, SET);   // Xanh tắt - Line 1

			    // Cấu hình Line 2
			    HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, SET); // Xanh sáng - Line 2
			    HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, SET); // Vàng tắt - Line 2
			    HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, RESET);
			    counter_amber_on--;
	if(counter_amber_on==0){
		 //setTimer(0, green_on);
		counter_green_on = green_state*4;
		 status = GREEN_RED;
		 setmode1(red_state,green_state);
	}
}
void model_2(){
	if(buttonFlags[1]==1){
			duration++;
			if(duration!=0){
				switch(status){
						case MAN_RED:
							//decrease_time_mode1();
							red_on = duration*1000;
							red_state = duration;
							break;
						case MAN_YELLOW:
							yellow_on = duration*1000;
							yellow_state = duration;
							break;
						case MAN_GREEN:
							green_on = duration*1000;
							green_state = duration;
													break;
			}}
			clearbut();
			if(duration>99){
				duration=1;
			}
		}
}

void init_man_red(){
	//return_mode1();
	update_time_red--;
	time_stage_2--;
	if(update_time_red==0){
		HAL_GPIO_TogglePin(RED_1_GPIO_Port, RED_1_Pin);
		HAL_GPIO_TogglePin(RED_2_GPIO_Port, RED_2_Pin);
		//setTimer(1, update_time_red);
		update_time_green = 2;
	}
	if(buttonFlags[0]==1){
		buttonFlags[0]= 0;
		status = MAN_YELLOW;
		time_stage_2 = 50;
		init_automatic();
		update_time_yellow = 2;
		HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, RESET);
		setmodecus(3);
		duration = 0;

	}
	if(time_stage_2==0){
		status = GREEN_RED;
		//setTimer(0, green_on);
		counter_green_on = green_state*4;
		init_automatic();
	}

}
void init_man_yellow(){
	update_time_yellow--;
	time_stage_2--;
	if (update_time_yellow==0) {
	    HAL_GPIO_TogglePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin);
	    HAL_GPIO_TogglePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin);
	    //setTimer(1, update_time_yellow);
	    update_time_yellow =2;
	}
	if(buttonFlags[0]==1){
			buttonFlags[0]= 0;
			status = MAN_GREEN;
			//setTimer(0,time_stage_2);
			update_time_yellow=40;
			init_automatic();
			//setTimer(1, update_time_green);
			update_time_green=2;
			HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, RESET);
			HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, RESET);
			setmodecus(4);
			duration = 0;

		}
	//return_mode1();
}
void init_man_green(){
		update_time_green--;
		time_stage_2--;
	if (update_time_green==0) {
	    HAL_GPIO_TogglePin(GREEN_1_GPIO_Port, GREEN_1_Pin);
	    HAL_GPIO_TogglePin(GREEN_2_GPIO_Port, GREEN_2_Pin);
	    //setTimer(1, update_time_green);
	    update_time_green=2;
	}
	return_mode1();
}

