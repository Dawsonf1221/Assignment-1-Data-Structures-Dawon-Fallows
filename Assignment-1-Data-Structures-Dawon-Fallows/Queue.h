#pragma once

#include "User.h"


typedef struct queue {

	USER data;
	struct queue* next;

}QUEUE;

void CreateEmptyQueue(QUEUE* head, QUEUE* tail);
int IsQueueEmpty(QUEUE* head);
void DequeueNode(QUEUE** head);
int EnqueueRandomUsers(QUEUE* ptr, int NumberOfUsers);



