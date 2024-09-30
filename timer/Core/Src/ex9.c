#include "ex9.h"

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0x7C, 0xC6, 0xC6, 0xFE, 0xC6, 0xC6, 0xC6, 0x00};

void init_ex9() {
    HAL_GPIO_WritePin(EMN_0_GPIO_Port, EMN_0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(EMN_1_GPIO_Port, EMN_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(EMN_2_GPIO_Port, EMN_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(EMN_3_GPIO_Port, EMN_3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(EMN_4_GPIO_Port, EMN_4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(EMN_5_GPIO_Port, EMN_5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(EMN_6_GPIO_Port, EMN_6_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(EMN_7_GPIO_Port, EMN_7_Pin, GPIO_PIN_RESET); // Changed to SET

    HAL_GPIO_WritePin(ROW_0_GPIO_Port, ROW_0_Pin, GPIO_PIN_RESET); // Changed to SET
    HAL_GPIO_WritePin(ROW_1_GPIO_Port, ROW_1_Pin, GPIO_PIN_SET); // Changed to SET
    HAL_GPIO_WritePin(ROW_2_GPIO_Port, ROW_2_Pin, GPIO_PIN_SET); // Changed to SET
    HAL_GPIO_WritePin(ROW_3_GPIO_Port, ROW_3_Pin, GPIO_PIN_SET); // Changed to SET
    HAL_GPIO_WritePin(ROW_4_GPIO_Port, ROW_4_Pin, GPIO_PIN_SET); // Changed to SET
    HAL_GPIO_WritePin(ROW_5_GPIO_Port, ROW_5_Pin, GPIO_PIN_SET); // Changed to SET
    HAL_GPIO_WritePin(ROW_6_GPIO_Port, ROW_6_Pin, GPIO_PIN_SET); // Changed to SET
    HAL_GPIO_WritePin(ROW_7_GPIO_Port, ROW_7_Pin, GPIO_PIN_SET);
}

void run_ex9() {
    for (index_led_matrix = 0; index_led_matrix < MAX_LED_MATRIX; index_led_matrix++) {
        // Cập nhật ma trận LED với hàng hiện tại
        updateLEDMatrix(index_led_matrix);

        // Thời gian chờ để LED có thể hiển thị
        HAL_Delay(500); // Điều chỉnh thời gian này tùy thuộc vào tốc độ bạn muốn hiển thị
    }
}

void updateLEDMatrix(int index) {
    // Tắt tất cả các hàng trước khi bật hàng mới
    for (int i = 0; i < MAX_LED_MATRIX; i++) {
        HAL_GPIO_WritePin(ROW_0_GPIO_Port, ROW_0_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(ROW_1_GPIO_Port, ROW_1_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(ROW_2_GPIO_Port, ROW_2_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(ROW_3_GPIO_Port, ROW_3_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(ROW_4_GPIO_Port, ROW_4_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(ROW_5_GPIO_Port, ROW_5_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(ROW_6_GPIO_Port, ROW_6_Pin, GPIO_PIN_SET);
        HAL_GPIO_WritePin(ROW_7_GPIO_Port, ROW_7_Pin, GPIO_PIN_SET);
    }

    // Bật hàng tương ứng với chỉ số index
    switch (index) {
        case 0: HAL_GPIO_WritePin(ROW_0_GPIO_Port, ROW_0_Pin, GPIO_PIN_RESET); break;
        case 1: HAL_GPIO_WritePin(ROW_1_GPIO_Port, ROW_1_Pin, GPIO_PIN_RESET); break;
        case 2: HAL_GPIO_WritePin(ROW_2_GPIO_Port, ROW_2_Pin, GPIO_PIN_RESET); break;
        case 3: HAL_GPIO_WritePin(ROW_3_GPIO_Port, ROW_3_Pin, GPIO_PIN_RESET); break;
        case 4: HAL_GPIO_WritePin(ROW_4_GPIO_Port, ROW_4_Pin, GPIO_PIN_RESET); break;
        case 5: HAL_GPIO_WritePin(ROW_5_GPIO_Port, ROW_5_Pin, GPIO_PIN_RESET); break;
        case 6: HAL_GPIO_WritePin(ROW_6_GPIO_Port, ROW_6_Pin, GPIO_PIN_RESET); break;
        case 7: HAL_GPIO_WritePin(ROW_7_GPIO_Port, ROW_7_Pin, GPIO_PIN_RESET); break;
    }

    // Gửi giá trị cho chân EMN tương ứng với hàng hiện tại
    uint8_t ledValue = matrix_buffer[index];
    for (int i = 0; i < 8; i++) {
        if (ledValue & (1 << i)) {
            HAL_GPIO_WritePin(EMN_0_GPIO_Port, EMN_0_Pin + i, GPIO_PIN_RESET); // bật LED
        } else {
            HAL_GPIO_WritePin(EMN_0_GPIO_Port, EMN_0_Pin + i, GPIO_PIN_SET); // tắt LED
        }
    }
}
