#include<stdio.h>
#include<stdlib.h>

int *CQ,max,rear=-1,front=-1;

void insert(){
    if((rear+1)%max==front)
    {
        printf("Overflow");
        return;
    }
    int x;
    if(front==-1)
        front++;
    printf("Enter number to insert: ");
    scanf("%d",&x);
    printf("Element %d inserted",x);
    rear=(rear+1)%max;  
    CQ[rear]=x;
}

void delete(){
    if(front==-1)
    {
        printf("Underflow");
        return;
    }
    printf("Element %d deleted",CQ[front]);
    if(front==rear)
        front=rear=-1;
    else
        front=(front+1)%max;
}

void display()
{
    if(rear!=-1)
    {
        printf("Circular Queue:");
        for(int i=front;i!=rear;i=(i+1)%max)
            printf(" %d",CQ[i]);
        printf(" %d",CQ[rear]);
    }
    else
        printf("Queue empty");
}

void main()
{
    printf("Enter max size: ");
    scanf("%d",&max);
    CQ=(int*)malloc(max*sizeof(int));
    int num,ch;
    do
    {
        printf("\n\n1.Insert\n2.Delete\n3.Display\n4.Stop\nYour choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();break;
            case 2:delete();break;
            case 3:display();break;
        }
    }while(ch!=4);
}