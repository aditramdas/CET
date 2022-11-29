#include <stdio.h>

int main(void)
{
	int small , secSmall , i , n, temp;
	printf("Enter the number of terms: \n");
	scanf("%d" , &n);
	printf("Enter the numbers : \n");
	scanf(" %d" , &small);
	scanf(" %d" , &temp);
	if(temp < small)
	{
		secSmall = small;
		small = temp;
	}
	else secSmall = temp;
	for(i = 0 ; i< n-2 ; i++)
	{
		scanf(" %d" , &temp);
		if(temp < secSmall && temp > small)
			secSmall = temp;
		else if(temp < small)
		{
			secSmall = small;
			small = temp;
		}
	}
	printf("\nSecond small term : %d\n", secSmall);

}