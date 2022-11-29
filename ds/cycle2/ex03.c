#include <stdio.h>
#include <stdlib.h>
#define max 5

int queue[max];
int front=-1;
int rear=-1;

void insert();
int delete();
void display();
int main(void){
	int i, n ;
	while(1){
		printf("Operations:\n1)Insert\n2)Delete\n3)Display\n4)End\n");
		printf("Option: ");
		scanf("%d" , &n);
		switch(n){
			case 1:
				insert();
				printf("\n");
				break;
			case 2:
				delete();
				printf("\n");
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Terminating all operations.......\n");
				exit(1);
		}
	}
}

void insert(){
	int x;
	if(rear==max-1)
	{
		printf("Overflow\n");
		return;
	}
	if(front==-1)
		front++;
	printf("Enter element to be inserted: ");
	scanf("%d" , &x);
	rear++;
	queue[rear] = x;
	printf("Elements %d inserted\n", x);
}

int delete(){
	if(front==-1)
	{
		printf("Underflow\n");
		return 1;
	}
	if(front==rear)
		front=rear=-1;
	else
		front++;
}

void display()
{
	printf("Elements:\n");
	for(int i=front ; i <= rear ; i++)
		printf("%d\t",queue[i] );
	printf("\n");
}