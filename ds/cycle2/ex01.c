#include <stdio.h>
#include <stdlib.h>

int stack[20],top=-1;
void push(int);
void pop();
void display();

int main(void){
	int n,m , i;
	
	while(1){
		printf("Operations:\n**********\npush(1): \npop(2): \ndisplay(3):\nend(4):\n***********\nYour Option: ");
	scanf("%d" , &n);
		switch(n){
			case 1:
				printf("Enter number to be pushed: ");
				scanf("%d" , &m);
				push(m);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Terminating all operations........\n");
				exit(1);
		}
		printf("\n-------------\n");
	}
}

void push(int n)
{
	if(top == 19)
	{
		printf("Overflow!!\n ");
		return;
	}
	else{
		top += 1;
		stack[top] = n;
	}
}

void pop()
{
	if(top ==-1)
	{
		printf("Underflow!!!\n");
		return;
	}
	else{
		top -=1;
	}
}
void display()
{
	int i;
	for(i=0 ; i <= top ; i++)
		printf("%d  ",stack[i] );
	printf("\n");
}