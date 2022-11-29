#include <stdio.h>
#include <string.h>
 int main(void)
 {
 	int i,n,j;
 	char A[50][50] , B[50][40],d, temp[50];
 	printf("Enter the number of words: ");
 	scanf(" %d" , &n);
 	printf("Enter the strings: ");
 	for(i = 0 ; i < n ; i++)
 		scanf(" %s" , *(A+i));
 	for(i = 0 ; i<n ; i++)
 		for(int j = 0 ; j < strlen(*(A+i)) ; j++)
 			B[i][j] = A[i][strlen(A[i]) - 1 - j];
 	printf("\n\nReversed Series: \n");
 	for(i = 0 ; i < n ; i++)
 		printf("%s\n",*(B+i) );
 	printf("\n");
 	printf("Alphabetical or Reverse Alphabetical(A/R)? ");
 	scanf(" %c",&d);
 	for(i = 0 ; i< n-1 ; i++)
 		for(j = 0 ; j < n-1-i ; j++){
 			if(strcmp(*(B+j) , *(B+j+1))>0){
 				if('A' == d){
 					strcpy(temp ,B[j]);
 					strcpy(B[j] , B[j+1]);
 					strcpy(B[j+1] , temp);
 				}
 			}
 			else{
 				if(d == 'R'){
 					strcpy(temp ,B[j]);
 					strcpy(B[j] , B[j+1]);
 					strcpy(B[j+1] , temp);
 				}
 			}
 		}
		printf("\n\n");
	for(i = 0 ; i < n ; i ++)
		printf(" %s\n" , *(B+i));
 }