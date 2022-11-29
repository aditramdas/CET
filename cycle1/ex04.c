#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[50] , revS[50];
	int i,n;
	printf("Enter the string: ");
	scanf("%s" , s);
	n = strlen(s);
	for(i = 0 ; i < n ; i++)
		revS[i] = s[n - 1 -i];
	printf("\nReversed : %s\n", revS);
}