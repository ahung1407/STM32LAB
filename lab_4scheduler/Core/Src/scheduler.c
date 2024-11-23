/*
 * scheduler.c
 *
 *  Created on: Nov 30, 2023
 *      Author: PC
 */


#include "scheduler.h"

sTask SCH_tasks_G[SCH_MAX_TASK];

void SCH_Update(void){ //update the delay remaining of the task
	unsigned char idx;

	for(idx = 0; idx < SCH_MAX_TASK; idx++){
		if(SCH_tasks_G[idx].pTask){//if the delay is over, update the flag
			if(SCH_tasks_G[idx].delay == 0){
				SCH_tasks_G[idx].runME += 1;
				if(SCH_tasks_G[idx].period){ //if the task is to be run permanently, update the delay as the period
					SCH_tasks_G[idx].delay = SCH_tasks_G[idx].period;
				}
			}else{ //else just deduct the delay
				SCH_tasks_G[idx].delay -= 1;
			}
		}
	}
}

unsigned char SCH_Add_Task(void(*pFunction)(), unsigned int DELAY, unsigned int PERIOD){
	unsigned char idx = 0;

	while((SCH_tasks_G[idx].pTask != 0) && (idx < SCH_MAX_TASK)){
		idx++;
	}//search for an open space in the array

	if(idx == SCH_MAX_TASK){ //if the task array is full, return
		return SCH_MAX_TASK;
	}

	//add the task into the array
	SCH_tasks_G[idx].pTask = pFunction;
	SCH_tasks_G[idx].delay = DELAY;
	SCH_tasks_G[idx].period = PERIOD;
	SCH_tasks_G[idx].runME = 0;
	SCH_tasks_G[idx].taskID = idx;

	return idx;
}

void SCH_Dispatch_Tasks(void){
	unsigned char idx;

	for(idx = 0; idx < SCH_MAX_TASK; idx++){
		if(SCH_tasks_G[idx].runME > 0){//run the task
			(*SCH_tasks_G[idx].pTask)();
			SCH_tasks_G[idx].runME -= 1;
			if(SCH_tasks_G[idx].period == 0){ //oneshot task
				SCH_DeleteTask(idx);
			}
		}
	}
}

void SCH_DeleteTask(const int task_index){
	SCH_tasks_G[task_index].delay = 0;
	SCH_tasks_G[task_index].pTask = NULL;
	SCH_tasks_G[task_index].period = 0;
	SCH_tasks_G[task_index].runME = 0;
	SCH_tasks_G[task_index].taskID = 0;
}
