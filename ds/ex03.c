#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *ptr1 , *ptr2 , *ptr3 , *ptr4;
	int m,n ,p , q, i ,j,k, C[50][50];
	printf("Enter the order of the matrix: ");
	scanf(" %d %d" , &m , &n);
	printf("Enter the order of the matrix: ");
	scanf(" %d %d" , &p , &q);
	ptr1 = (int* )malloc(m*n*sizeof(int));
	ptr2 = (int* )malloc(p*q*sizeof(int));
	ptr3 = (int* )malloc(p*q*sizeof(int));
	ptr4 = (int* )malloc(m*q*sizeof(int));
	printf("Enter the matrix 1 elements: \n");
	for(i = 0 ; i < m*n ; i++)
		scanf(" %d" , ptr1+i);
	printf("Enter the matrix 2 elements: \n");
	for(i = 0 ; i < p*q ; i++)
		scanf(" %d" , ptr2+i);
	printf("Addition Result : \n");
	for(i = 0 ; i < m*n ; i++){
		*(ptr3 +i) = *(ptr1 + i) + *(ptr2+i);
		if((i+1)%n) printf("\n");
		printf("%d\t",*(ptr3 +i) );
	}
	printf("\n");
	for(i = 0  ; i < m ; i++)
		for(j = 0 ; j < q ; j++)
			for(k = 0 ; k < p ; k++)
				*(ptr4 + i*m + j) += *(ptr1 + m*i + k) * *(ptr2 + k*p + j);
	printf("Multiplication: \n");
	for(i = 0 ; i < m*q ; i++){
		if((i+1)%q) printf("\n");
		printf("%d\t",*(ptr4 +i) );
	}
	printf("\nTranspose: \n");
	for(i = 0 ; i < m ; i++){
		for(j = 0 ; j < n ; j++){
			printf("%d\t",*(ptr1 +j*m + i) );
	
		}
		printf("\n");
	}
	printf("\nUpper Triangular elements: \n");
	for(i = 0 ; i < m ; i++){
		for(j = 0 ; j < n ; j++){
			
		if(j >= i)
			printf("%d\t",*(ptr1 +i*m + j) );
		}
		printf("\n");
	}
	printf("\nDiagonal elements: \n");
	for(i = 0 ; i < m ; i++)
		printf("%d\t",*(ptr1 +i*m + i) );
	printf("\n");

}