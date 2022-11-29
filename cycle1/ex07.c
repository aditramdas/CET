#include <stdio.h>

int main(void)
{
	int i , j  , A[20][20] , m , n;
	printf("Enter the dimensions of matrix: ");
	scanf(" %d %d" , &m , &n);
	printf("Enter the elements of the matrix : \n");
	for(i = 0; i< m ; i++)
		for(j = 0 ; j < n ; j++)
			scanf(" %d" , &A[i][j]);
	printf("Transpose of the given matrix :\n");
	for(i = 0; i< m ; i++){
		for(j = 0 ; j < n ; j++)
			printf("%d\t" , A[j][i]);
		printf("\n");
	}
}