#include <stdio.h>

int main(void)
{
	int i,j , A[50] , B[50] , C[50] , m , n , t=0;
	printf("Enter the number of elements in the first array: ");
	scanf("%d" , &m);
	printf("Enter the number of elements in the second array: ");
	scanf(" %d" , &n);
	printf("Enter the elements of the first array: ");
	for(i = 0 ; i < m ; i++)
		scanf(" %d" , &A[i]);
	
	printf("Enter the elements of the second array: ");
	for(i = 0 ; i < n ; i++)
		scanf(" %d" , &B[i]);
	
	i = 0 ; j = 0;
	while(i < m && j < n)
	{
		if(A[i] < B[j])
		{
			C[t] = A[i];
			i++;		
		}
		else if(A[i] == B[j])
		{
			C[t] = A[i];
			i++;
			j++;		
		}
		else if(A[i] > B[j])
		{
			C[t] = B[j];
			j++;
		}
		t++;
	}
	while(i < m) {
		C[t] = A[i];
		t++;
		i++;
	}
	while(j < n) {
		C[t] = B[j];
		t++;
		j++;
}
	printf(" The combined set is : ");
	for(i = 0 ; i< t ; i++)
		printf(" %d" , C[i]);
	printf("\n");
}