#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "software_timer.h"

// Định nghĩa trạng thái nút
#define NORMAL_STATE GPIO_PIN_SET     // Nút không nhấn (Pull-up)
#define PRESSED_STATE GPIO_PIN_RESET  // Nút được nhấn

// Số lượng nút bấm cần quản lý
#define NUM_OF_BUTTONS 3
extern int buttonFlags[NUM_OF_BUTTONS];
// Khai báo các hàm xử lý
void getKeyInput();              // Hàm đọc trạng thái tất cả các nút
void subKeyProcess(int index);   // Xử lý khi nút được nhấn
void longPressProcess(int index); // Xử lý khi nút được nhấn đè

#endif /* INC_BUTTON_H_ */
