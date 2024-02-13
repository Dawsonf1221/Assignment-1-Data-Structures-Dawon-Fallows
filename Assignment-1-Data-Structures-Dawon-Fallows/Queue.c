// queue implementation
// assignment - 1 - dawsonf - prog72370

#include "Queue.h"
#include "User.h"



void CreateEmptyQueue(QUEUE* head, QUEUE* tail) {
	//sets the head and tail to NULL
	head = tail = NULL;

}

int IsQueueEmpty(QUEUE* head) {
	if (head == NULL)
		return 1;
}

void DequeueNode(QUEUE** head) {


	QUEUE* current = *head;

	//loops while the queue still has data
	while (current != NULL && current->data.userLevel > 0) {

		QUEUE* tmp = current;

		tmp->data.userName[10] = NULL;

		// prints the username and level
		printf("Username: %s \n", tmp->data.userName);
		printf("Level: %d\n", tmp->data.userLevel);


		//determines what faction the user is in and prints it
		if (tmp->data.userFaction == factionBlue) {
			printf("User is in the Blue Faction\n");
			printf("\n");
		}

		if (tmp->data.userFaction == factionRed) {
			printf("User is in the Red Faction\n");
			printf("\n");
		}

		if (tmp->data.userFaction == factionGreen) {
			printf("User is in the Green Faction\n");
			printf("\n");
		}

		//move to the next node
		current = current->next;

		//free the current node
		free(tmp);

	}

	*head = NULL;

}

int EnqueueRandomUsers(QUEUE* ptr, int NumberOfUsers) {


	//character pool used to make the usernames
	static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	//used to select the character
	int l = (int)(sizeof(charset) - 1);
	char tmpUserName[MAXNAME];
	srand(time(NULL));

	//loops for the number of users selected
	for (int i = 0; i < NumberOfUsers; i++)
	{
		//allocate memory for the next spot in the queue
		ptr->next = (struct queue*)malloc(sizeof(struct queue));

		if (ptr->next == NULL)
		{
			printf("\n No more Memory  available");
			return 1;

		}

		//loops 10 times and gets a random char from the character pool
		for (int n = 0; n < MAXNAME; n++) {
			int charsetNum = rand() % l;
			//sets that char to the place in the username
			tmpUserName[n] = charset[charsetNum];
		}

		//copys the data over to the queue pointer
		strncpy(ptr->data.userName, tmpUserName, MAXNAME);
		//creates a random level and gives the user their faction
		ptr->data.userLevel = rand() % MAXLEVEL + MINLEVEL;
		ptr->data.userFaction = (rand() % (103 - 101 + 1)) + 101;

		ptr = ptr->next;
	}

	ptr->next = NULL;

	return 0;
}
