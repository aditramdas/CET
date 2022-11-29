#include <stdio.h>
#include <stdlib.h>
void insertatFront();
void insertatRear();
int deleteFromFront();
int deleteFromRear();
void display();

int front=-1;
int rear=-1;
#define max 5
int queue[max];

int main(void){
	int i, n ;
	while(1){
		printf("Operations:\n1)Insert at Front\n2)Insert at Rear\n3)Delete from Front\n4)Delete from Rear\n5)Display\n6)End\n");
		printf("Option: ");
		scanf("%d" , &n);
		switch(n){
			case 1:
				insertatFront();
				printf("\n");
				break;
			case 2:
				insertatRear();
				printf("\n");
				break;
			case 3:
				deleteFromFront();
				printf("\n");
				break;
			case 4:
				deleteFromRear();
				printf("\n");
				break;
			case 5:
				display();
				break;
			case 6:
				printf("Terminating all operations.......\n");
				exit(1);
		}
	}
}

void insertatFront()
{
	if(front==(rear+1)%max){
		printf("Overflow!!\n");
		return;
	}
	int x;
	printf("Enter the element to be inserted: ");
	scanf("%d" , &x);
	if(front==-1 && rear==-1){
		front=rear=0;
	}
	else if(front==0)
		front=max-1;
	else
		front--;
	queue[front] = x;
}
void insertatRear(){
	if(front==(rear+1)%max){
		printf("Overflow!!!!\n");
		return;
	}
	int x;
	printf("Enter the element to be inserted: ");
	scanf("%d" , &x);
	if(rear==-1 && front==-1)
		front=rear=0;
	else if(rear==max-1)
		rear = max-1;
	else rear = (rear+1)%max;
	queue[rear] = x;
}

int deleteFromFront(){
	int c = queue[front];
	if(front==-1 && rear==-1){
		printf("Underflow!!!\n");
		return 0;
	}
	if(front==rear)
		front=rear=-1;
	else if(front==max-1)
		front= 0;
	else
		front = (front+1)%max;
	return c;
}

int deleteFromRear(){
	int c = queue[front];
	if(front==-1 && rear==-1)
	{
		printf("Underflow!!\n");
		return 1;
	}
	if(front == rear)
		front=rear=-1;
	else if(rear==0)
		rear = max-1;
	else 
		rear--;
	return c;
}
void display()
{
    printf("Deque: ");
    
    if(rear!=-1&&front!=-1){
    	for(int i=front;i!=rear;i=(i+1)%max)
	    {
	        printf("%d ",queue[i]);
	        
	    }
        	printf("%d ",queue[rear]);
    	}
    else 
        printf("Empty");    
    printf("\n________________\n");

}