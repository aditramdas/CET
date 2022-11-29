#include <stdio.h>
#include <string.h>

int inn(char A[] , char a); 

int main(void)
{
	int i, j , length=0 , n;
	char str[50] , sub[50] , sub1[50] ;
	printf("Enter the string: ");
	scanf("%s" , str);
	n = strlen(str);
	for(i = 0 ; i < n ; i++)
	{
		char temp[50];
		j = 0 ;
		while(!inn(temp , str[i+j]))
		{
			if(str[i+j] == '\0')
				break;
			temp[j] = str[i+j];
			j++;
		}
		temp[j] = '\0';
		printf("%s\n",temp );
		if(j > length)
		{
			length = j;
			strcpy(sub1, temp);
		}
	}
	printf("String: %s \n", sub1 );
	printf("Length: %d\n" , length);
}

int inn(char A[] , char a)
{
	int i;
	for(i=0 ; i < strlen(A) ; i++)
		if(A[i] == a)
			return 1;
	return 0;
}