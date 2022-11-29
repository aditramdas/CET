#include <stdio.h>
#include <math.h>

int main(void)
{
	int n,i;
	printf("Enter the number: ");
	scanf("%d" , &n);
	for(i = 2 ; i< sqrt(n) ; i++)
	{
		if(n%i == 0)
		{
			printf("\nGiven number is not a prime number\n");
			break;
		}
	}
	if(i >= sqrt(n))
		printf("\nThe given number is a prime number\n");
}