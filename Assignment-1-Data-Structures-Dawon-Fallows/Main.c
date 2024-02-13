//assignment - 1 - dawsonf - prog72370

#include "Queue.h"



int main(void) {

	int numOfUsers;


	struct queue* head;
	struct queue* tail;

	head = (struct queue*)malloc(sizeof(struct queue));
	tail = (struct queue*)malloc(sizeof(struct queue));

	CreateEmptyQueue(head, tail);


	printf("How many users would you like to add: ");
	scanf("%d", &numOfUsers);

	EnqueueRandomUsers(head, numOfUsers);




	return 0;
}