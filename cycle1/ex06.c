#include <stdio.h>

int main(void)
{
	int i , j , k , A[20][20] , B[20][20], C[20][20] = {0} , p, q, m , n;
	printf("Enter the dimensions of first matrix: ");
	scanf(" %d %d" , &m , &n);
	printf("Enter the dimensions of second matrix: ");
	scanf(" %d %d" , &p , &q);
	printf("Enter the elements of the first matrix : \n");
	for(i = 0; i< m ; i++)
		for(j = 0 ; j < n ; j++)
			scanf(" %d" , &A[i][j]);
	printf("\nEnter the elements of the second matrix : \n");
	for(i = 0; i< p ; i++)
		for(j = 0 ; j < q ; j++)
			scanf(" %d" , &B[i][j]);
	for(i = 0 ; i < m ; i++)
		for(j = 0 ; j < q ; j++)
			for(k = 0 ; k < n ; k++)
				C[i][j] += A[i][k] * B[k][j];
	printf("\nMultiplied matrix : \n");
	for(i = 0; i< m ; i++)
	{
		for(j = 0 ; j < q ; j++)
			printf("%d\t" , C[i][j]);
		printf("\n");
	}
}