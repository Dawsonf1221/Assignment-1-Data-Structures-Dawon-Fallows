#pragma once

#include "User.h"


typedef struct queue {

	USER data;
	struct queue* next;

}QUEUE;

void CreateEmptyQueue(QUEUE* head, QUEUE* tail);
void CheckQueue(QUEUE* head, QUEUE* tail);
void EnqueueNode(QUEUE* head, QUEUE* tail);
void DequeueNode(QUEUE* head, QUEUE* tail);

