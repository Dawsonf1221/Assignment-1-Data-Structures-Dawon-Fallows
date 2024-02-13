// queue implementation
// assignment - 1 - dawsonf - prog72370

#include "Queue.h"
#include "User.h"



void CreateEmptyQueue(QUEUE* head, QUEUE* tail) {
	head = tail = NULL;
}

int IsQueueEmpty(QUEUE* head, QUEUE* tail) {
	return (head == NULL);
}

void EnqueueNode(QUEUE* head, QUEUE* tail, QUEUE* ptr) {
	
	if (head == NULL) {
		head = tail = ptr;
	}
	else {
		tail->next = ptr;
	}
	ptr->next = NULL; 
	tail = ptr;
	//add data here


}

QUEUE* DequeueNode(QUEUE* head, QUEUE* tail) {
	
	QUEUE* temp;

	if (head == NULL) 
		return NULL;
	temp = head; // popping the head
	head = head->next; // make the next node the head
	return(temp);
}

int EnqueueRandomUsers(QUEUE* ptr, int NumberOfUsers) {



	static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int l = (int)(sizeof(charset) - 1);
	char tmpUserName[MAXNAME];
	srand(time(NULL));

	for (int i = 0; i < NumberOfUsers - 1; i++)
	{
		ptr->next = (struct queue*)malloc(sizeof(struct queue));

		if (ptr->next == NULL)
		{
			printf("\n No more Memory  available");
			return 1;

		}
		
		for (int n = 0; n < MAXNAME; n++) {
			int charsetNum = rand() % l;  
			tmpUserName[n] = charset[charsetNum];
		}

		strncpy(ptr->data.userName, tmpUserName, MAXNAME);
		ptr->data.userLevel = rand() % 60 + 1;
		ptr->data.userFaction = (rand() % (103 - 101 + 1)) + 101;

		printf("%s", ptr->data.userName);
		printf("%d", ptr->data.userLevel);
		printf("%d", ptr->data.userFaction);

		ptr = ptr->next;
	}

	ptr->next = NULL;

	return 0;
}
