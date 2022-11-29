#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node* link;
}node;
node* getNode();
void InsertatBeg(node* h);
void InsertatEnd(node* h);
void InsertatPos(node* h);
void DeleteFromPos(node* h);
void DeleteFromBeg(node* h);
void DeleteFromEnd(node* h);
void display(node* h);
int main(void)
{
	node* header = getNode();
	header->link = NULL;
	int n;
	do{
		printf("Options:\n1)Insert at Beginning\n2)Insert at End\n3)Insert at a Particular Position\n4)Delete from a Particular Position\n5)Delete from Beginning\n6)Delete from End\n7)Display\n8)End\nYour Choice: ");
		scanf("%d" , &n);
		switch(n){
			case 1:
				InsertatBeg(header);
				break;
			case 2:
				InsertatEnd(header);
				break;
			case 3:
				InsertatPos(header);
				break;
			case 4:
				DeleteFromPos(header);
				break;
			case 5:
				DeleteFromBeg(header);
				break;
			case 6:
				DeleteFromEnd(header);
				break;
			case 7:
				display(header);
		}
	}
	while(n != 8);
}
node* getNode(){
	node* p;
	p = (node*)malloc(sizeof(node));
	return p;
}
void InsertatBeg(node* h){
	node* insert = getNode();
	insert->link = h->link;
	h->link = insert;
	int n;
	printf("Enter number to be inserted: ");
	scanf("%d" , &n);
	insert->data = n;
}
void InsertatEnd(node* h){
	node* insertE = getNode();
	node* p = h;
	while(p->link != NULL){
		p = p->link;
	}
	p->link = insertE;
	int n;
	printf("Enter number to be inserted: ");
	scanf("%d" , &n);
	insertE->data = n;
	insertE->link = NULL;

}
void InsertatPos(node* h){

}
void DeleteFromPos(node* h){

}
void DeleteFromBeg(node* h){

}
void DeleteFromEnd(node* h){

}
void display(node* h){
	node* k = getNode();
	k = h;
	k = k->link;
	while(k->link != NULL){
		printf("%d\t", k->data);
		k = k->link;
	}
	printf("%d", k->data);
	printf("\n\n");

}
