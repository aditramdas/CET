#include <stdio.h>

int main(void){
	int a[20][20] , m, n , count;
	printf("Enter number of rows and columns: ");
	scanf("%d %d" , &m , &n);
	printf("\nEnter the elements: \n");
	for(int i = 0 ; i  < m ; i++)
		for(int j=0 ; j < n ; j++){
			scanf("%d" , &a[i][j]);
			if(a[i][j] != 0)
				count++;
		}
	printf("%d\t%d\t%d\n", m , n , count);
	for(int i = 0 ; i < m ; i++)
		for(int j = 0 ; j < n ; j++)
			if(a[i][j] != 0)
				printf("%d\t%d\t%d\n",i+1 , j+1 , a[i][j] );
}