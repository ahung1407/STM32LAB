/*
 * scheduler.h
 *
 *  Created on: Nov 30, 2023
 *      Author: PC
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include "main.h"

#define SCH_MAX_TASK 	40
#define NO_TASK_ID		0

typedef struct{
	void (*pTask)(void); //function pointer
	uint32_t delay; //delay before actuating the task
	uint32_t period; //period of which the task activates
	uint8_t runME; //flag activated when the delay is over
	uint32_t taskID;
} sTask;

void SCH_Update(void);
void SCH_Init(void);
unsigned char SCH_Add_Task(void(*pFunction)(), unsigned int DELAY, unsigned int PERIOD);
void SCH_Dispatch_Tasks(void);
void SCH_DeleteTask(const int task_index);

#endif /* INC_SCHEDULER_H_ */
