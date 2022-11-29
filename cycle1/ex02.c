#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,n;
	char s[50];
	printf("Enter the string : \n");
	scanf("%s" , s);
	n = strlen(s);
	for(i = 0 ; i < n ; i++)
		if(s[i] != s[n-i-1])
		{
			printf("\nThe given string is not a palindrome.\n");
			break;
		}
	if(i == n)
		printf("\nThe given string is a palindrome\n");
}