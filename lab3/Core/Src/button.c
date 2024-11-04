/*
 * button.c
 *
 *  Created on: Oct 16, 2024
 *      Author: admim
 */

#include "button.h"

// Khai báo trạng thái của từng nút dưới dạng mảng
int KeyReg0[NUM_OF_BUTTONS] = {NORMAL_STATE};
int KeyReg1[NUM_OF_BUTTONS] = {NORMAL_STATE};
int KeyReg2[NUM_OF_BUTTONS] = {NORMAL_STATE};
int KeyReg3[NUM_OF_BUTTONS] = {NORMAL_STATE};
int TimerForKeyPress[NUM_OF_BUTTONS] = {200};  // Dùng cho nhấn đè

// Cờ để theo dõi trạng thái nhấn nút của từng nút
int buttonFlags[NUM_OF_BUTTONS] = {0};  // Mảng cờ cho từng nút

// Cấu hình chân GPIO tương ứng với từng nút
GPIO_TypeDef* buttonPorts[NUM_OF_BUTTONS] = {but1_GPIO_Port, GPIOC, GPIOC};
uint16_t buttonPins[NUM_OF_BUTTONS] = {but1_Pin, but2_Pin, but3_Pin};

void subKeyProcess(int index) {
    // Đặt cờ cho nút tương ứng khi nút được nhấn
    buttonFlags[index] = 1; // Đánh dấu rằng nút đã được nhấn

    // Xử lý khi nút được nhấn
}
void clearbut(){
	buttonFlags[0] = 0;
	buttonFlags[1] = 0;
	buttonFlags[2] = 0;
}

void getKeyInput() {
    for (int i = 0; i < NUM_OF_BUTTONS; i++) {
        // Cập nhật các thanh ghi trạng thái cho chống rung
        KeyReg0[i] = KeyReg1[i];
        KeyReg1[i] = KeyReg2[i];}

        KeyReg2[0] = HAL_GPIO_ReadPin(buttonPorts[0], buttonPins[0]);
        KeyReg2[1] = HAL_GPIO_ReadPin(buttonPorts[1], buttonPins[1]);
        KeyReg2[2] = HAL_GPIO_ReadPin(buttonPorts[2], buttonPins[2]);
        for(int i = 0; i < NUM_OF_BUTTONS; i++){
        if ((KeyReg0[i] == KeyReg1[i]) && (KeyReg1[i] == KeyReg2[i])) {
            if (KeyReg3[i] != KeyReg2[i]) {  // Phát hiện thay đổi trạng thái
                KeyReg3[i] = KeyReg2[i];

                if (KeyReg2[i] == PRESSED_STATE) {  // Nút được nhấn
                    TimerForKeyPress[i] = 200;  // Reset timer cho nhấn đè
                    subKeyProcess(i);  // Gọi hàm xử lý khi nhấn
                }
            } else {  // Kiểm tra nhấn đè
            		TimerForKeyPress[i]--;
            		if(TimerForKeyPress[i]==0){
            			KeyReg3[i] = NORMAL_STATE;
            		}
            }
        	}
        }
    }
