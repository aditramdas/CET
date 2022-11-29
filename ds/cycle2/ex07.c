#include <stdio.h>
#include <stdlib.h>
void search();

typedef struct{
	int EmpId;
	char firstName[25];
	char middleName[25];
	char lastName[25];
	double Salary;
}Employee;

Employee *p;
int n;
int main(void){
	int y;
	
	printf("Enter the number of Employees: ");
	scanf("%d" , &n);
	p = (Employee *)malloc(sizeof(Employee));
	for(int i = 0 ; i < n ; i++)
	{
		printf("Employee %d:\n", i+1);
		printf("Enter first name: ");
		scanf(" %s" , p[i].firstName);
		printf("Enter middle name: ");
		scanf(" %s" , p[i].middleName);
		printf("Enter last name: ");
		scanf(" %s" , p[i].lastName);
		printf("Enter Employee ID: ");
		scanf(" %d" , &(p[i].EmpId));
		printf("Enter Salary: ");
		scanf(" %le" , &(p[i].Salary));
		printf("\n");
	}

	while(1){
		search();
		printf("Do you want to continue?(1/0) ");
		scanf("%d" , &y);
		if(y==0)
			break;
	}
}

void search(){
	int m , i;
	printf("\nEnter the Employee ID to be searched: ");
	scanf("%d" , &m);
	for(i = 0 ; i < n ; i++){
		if(p[i].EmpId == m)
		{
			printf("\nName: %s %s %s\n" , p[i].firstName , p[i].middleName , p[i].lastName);
			printf("Salary: %f\n", p[i].Salary);
			break;
		}
	}
	if(i == n)
		printf("Employee not found!\n");
}