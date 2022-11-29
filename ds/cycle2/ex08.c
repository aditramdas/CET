#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(int i);
void search(char a[],  int i);
char a[20][50];
int main(void){
	FILE *fp;
	char ch;
	fp = fopen("string.txt" , "r");
	printf("Sorted: \n");
	int i=0 , j=0;
	while((fscanf(fp ,"%c" , &ch)) != EOF)
	{
		if( ch == '\n' ){
			a[i++][j] = '\0';
			j=0;
		}
		else{
			a[i][j++] = ch;
		}
	}
	sort(i);
	printf("\n");
	for(int x = 0 ; x < i ; x++)
			printf("%s\n",a[x]);
	printf("Enter the word to search: ");
	char s[20];
	scanf("%s" , s);
	search(s , i);
}
void sort(int n){
	char temp[50];
	for(int i = 0 ; i < n-1 ; i++)
		for(int j = 0 ; j<n - i-1  ; j++){
			if(strcmp(a[i] , a[i+1]) > 0){
				strcpy(temp , a[i]);
				strcpy(a[i] , a[i+1]);
				strcpy(a[i+1] , temp);
			}
		}
}
void search(char s[] , int n){
	int i , mid;
	int top = n;
	int bottom = 0;
	
	while(top >= bottom){
		mid = (top+bottom)/2;
		if(strcasecmp(a[mid] , s) == 0){
			printf("Element found at position: %d\n", mid+1);
			break;
		}
		else if(strcasecmp(a[mid] , s) > 0){
			top = mid -1;
		}
		else if(strcasecmp(a[mid] , s) < 0)
			bottom = mid +1;
	}
	if(top< bottom)
		printf("Element not found!\n");
}

	