#include <stdio.h>
#include <stdlib.h>


typedef struct {
	char firstName[20];
	char middleName[20];
	char lastName[20];
	double accNo;
	char accType[5];
	double balance;
}s;

void nameBalance( s *ptr , int n);
void display(s *ptr , int n);
void displayFD(s *ptr , int n);
	

int main(void)
	int n, i, j, choice;
	s *ptr;
	printf("Enter the number of customers: ");
	scanf("%d" , &n);
	ptr = malloc(n*sizeof(s));

	for(i = 0 ; i < n ; i++)
	{
		printf("\nFirst Name: ");
		scanf(" %s" , ptr+i->firstName);
		printf("\nMiddle Name: ");
		scanf(" %s" ,ptr+i->middleName);
		printf("\nLast Name: ");
		scanf(" %s" , ptr+i->lastName);
		printf("\nAcc No: ");
		scanf(" %s" , ptr+i->accNo);
		printf("\nAcc Type: ");
		scanf(" %s" , ptr+i->accType);
		printf("\nBalance: ");
		scanf(" %s" , ptr+i->balance);
	}
	printf("\n");
	while(1)
	{
		printf("Account Number Name and Balance(1),\nCustomer List(2),\nFD Customer List(3),\nExit(4)\nYour Choice: ");
		scanf("%d" , &choice);
		switch(choice){
			case 1:
				nameBalance(ptr , n);
				break;
			case 2:
				display(ptr , n);
				break;
			case 3:
				displayFD(ptr , n);
				break;
			case 4:
				exit(1);
		}
	}
	


}
void nameBalance(s *ptr , int n)
{
	int i;
	double searAcc;
	printf("Enter the customer to be searched: \n");
	scanf(" %ld" , &searAcc)
	for(i = 0 ; i< n ; i++)
	{
		if(*(ptr+i).accNo == searAcc)
		{
			printf("Customer Name: %s %s %s\n", *ptr+i->firstName,*ptr+i->middleName,*ptr+i->lastName);
			printf("Acc Balance: %ld\n",  *ptr+i->balance);
		}	
	}
	if(i==n)
		printf("Customer not found!\n");
}
void display(s *ptr , int n)
{
	s temp[100];
	for(int i = 0 ; i < n-1 ; i++)
	{
		for(int j = 0 ; j < n-i-1 ; j++)
		{
			if(strcmp(*ptr+j->.firstName , *ptr+j+1->.firstName) > 0)
			{
				temp = *(ptr+j);
				*(ptr+j) = *(ptr+j+1);
				*(ptr+j+1) = temp;
			}
		}
	}
	for(int i = 0 ; i < n ; i++)
	{
		printf("%s %s %s\n", *ptr+i->firstName,*ptr+i->middleName,*ptr+i->lastName);

	}
}
void displayFD(s *ptr , int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		if(*(ptr+i).accType == "FD")
			printf("%s %s %s\n", *ptr+i->firstName,*ptr+i->middleName,*ptr+i->lastName);
	}
}