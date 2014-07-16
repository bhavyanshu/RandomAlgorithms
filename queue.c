#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define MAX 100

typedef struct queue {
	int a[MAX]; 
	int head; 
	int tail;
}Queue;
Queue *ptr = (struct queue*)malloc(sizeof(struct queue)); //Pointer of type queue


void display(queue *ptr);
void enque(queue *ptr, int num, int l); 
int deque(queue *ptr, int num, int l); 


int main() {

	int number,option,limit,status;
	printf("*******Welcome to Queue Simulation*******\n");
	printf("Enter the size of Queue:\n");
	scanf("%d",&limit);

	ptr->head=0; //Initializing queue
	ptr->tail=0;

	while(1) {
		printf("1: Display queue\n");
		printf("2: Enqueue\n");
		printf("3: Dequeue\n");
		printf("4: Exit\n");
		scanf("%d",&option);
		switch(option) {
			case 1: //DISPLAY queue
				display(ptr);
				break;

			case 2: //EnQUEUE
				printf("Enter the element you want to enqueue :");
				scanf("%d",&number);
				enque(ptr, number, limit);
				break;

			case 3: //DeQUEUE
				status = deque(ptr, number, limit);
				if(status==0) {
					printf("No element left to dequeue! \n");
				}
				else {
				printf("The element dequeue'd out is: %d\n",status);
				}
				break;

			default: //Exit
				exit(0);
		} 
	}
}

void display(queue *ptr) {
	int i;
	printf("Current queue \n");
	for(i=ptr->head;i<=ptr->tail-1;i++) {
		printf("|%d|\n",ptr->a[i]);
	}
}

void enque(queue *ptr, int num, int l) { 

	if(ptr->tail==l) {
		printf("\nQueue limit reached\n");
		display(ptr);
		
	}
	else { 
		ptr->a[ptr->tail]=num;
		ptr->tail++;
		display(ptr);
	}
}

int deque(queue *ptr, int num, int l) { 

	int result;
	result = ptr->a[ptr->head];
	
	if(ptr->head==ptr->tail){
		ptr->head=ptr->tail=0;
		printf("\nQueue is empty Now\n");
		return 0;
	}
	else {
		ptr->head++;
		return result;
	}
}