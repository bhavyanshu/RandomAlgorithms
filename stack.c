#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define MAX 100

typedef struct stack {
	int a[MAX]; //Array to store numbers.
	int top; //The index of top most element
}Stack;
Stack *ptr = (struct stack*)malloc(sizeof(struct stack)); //Pointer of type stack


void display(Stack *ptr);
void push(Stack *ptr, int num, int l); //Pushes the number to the stack top
int pop(Stack *ptr, int num); //Pops the number from the stack top


int main() {

	int number,option,limit,status;
	ptr->top=-1; //Initializing stack
	printf("*******Welcome to Stack Simulation*******\n");
	printf("Enter how many elements you want in the stack:\n");
	scanf("%d",&limit);

	while(1) {
		printf("1: Display Stack\n");
		printf("2: Push\n");
		printf("3: Pop\n");
		printf("4: Exit\n");
		scanf("%d",&option);
		switch(option) {
			case 1: //DISPLAY STACK
				display(ptr);
				break;

			case 2: //PUSH
				printf("Enter the element you want to push :");
				scanf("%d",&number);
				push(ptr, number, limit);
				break;

			case 3: //POP
				status = pop(ptr, number);
				if(status==0) {
					printf("No element left to pop! \n");
				}
				else {
				printf("The element pop'd out is: %d\n",status);
				}
				break;

			default: //Exit
				exit(0);
		} 
	}
}

void display(Stack *ptr) {
	int i;
	printf("Current Stack \n");
	for(i=ptr->top;i>=0;i--) {
		printf("|%d|\n",ptr->a[i]);
	}
}

void push(Stack *ptr, int num, int l) { //We push the element but first we check if the stack is full or not.

	
	if(ptr->top==l-1) {
		printf("\n*******Stack Overflow Condition*******\n\n");
	}
	else { //We push the element to the top
		ptr->top++;
		ptr->a[ptr->top]=num;
		display(ptr);
	}
}

int pop(Stack *ptr, int num) { //We pop the element but first we check if the stack is already empty or not.

	int result;

	if(ptr->top==-1){
		printf("\n*******Empty Stack Condition*******\n\n");
		return 0;
	}
	else {
		result = ptr->a[ptr->top];
		ptr->top--;
	}
	return result;
}