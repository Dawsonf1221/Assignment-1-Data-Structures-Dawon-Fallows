//assignment - 1 - dawsonf - prog72370

#include "Queue.h"

int main(void) {

	int numOfUsers;
	int queueCheck = 0;

	//initialize the head and the tail
	struct queue* head;
	struct queue* tail;

	head = (struct queue*)malloc(sizeof(struct queue));
	tail = (struct queue*)malloc(sizeof(struct queue));

	//Initializes the queue
	CreateEmptyQueue(head, tail);
	printf("Queue Has Ben Initialized \n\n");

	//asks the user how many users they would like to add
	printf("How many users would you like to add: ");
	int j = scanf("%d", &numOfUsers);
	printf("\n");

	//creates the randomly generated users, adds them to the queue, then returns if it was succsessfull or not
	int functionCheck = EnqueueRandomUsers(head, numOfUsers);

	if (functionCheck == 1)
		printf("The EnqueueRandomUsers function has failed");


	//dequeue the node one by one,print the user information and free the memory
	DequeueNode(&head);

	//check if the queue is empty
	if (IsQueueEmpty(head) == 1)
		printf("Queue Is Empty\n");

	//free the head and tail pointer
	free(head);
	free(tail);

	return 0;
}