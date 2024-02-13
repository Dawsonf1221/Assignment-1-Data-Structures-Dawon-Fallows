#pragma once

#include "User.h"


typedef struct queue {

	USER data;
	struct queue* next;

}QUEUE;

void CreateEmptyQueue(QUEUE* head, QUEUE* tail);
int IsQueueEmpty(QUEUE* head, QUEUE* tail);
void EnqueueNode(QUEUE* head, QUEUE* tail, QUEUE* ptr);
QUEUE* DequeueNode(QUEUE* head, QUEUE* tail);
int EnqueueRandomUsers(QUEUE* ptr, int NumberOfUsers);


