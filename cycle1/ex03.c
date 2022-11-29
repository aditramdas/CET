#include <stdio.h>
#include <string.h>

int main(void)
{
	int i , n, count = 0;
	char s[50],  a;
	printf("Enter the string : ");
	scanf("%[^\n]" , s);
	printf("\nEnter the character to be searched: ");
	scanf(" %c" , &a);
	n = strlen(s);
	for(i = 0 ; i< n ; i++)
		if(s[i] == a)
			count++;
	printf("\nFrequency: %d\n" , count);
}