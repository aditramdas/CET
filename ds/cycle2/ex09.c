#include <stdio.h>

typedef struct{
	int expo;
	int coeff;
}poly;

int main(void){
	int n1 , n2 , endA , i , j;
	poly p[100] , q[100];
	printf("Enter the number of terms in first polynomial: ");
	scanf("%d" , &n1);
	printf("\nEnter the number of terms in second polynomial: ");
	scanf("%d" , &n2);
	printf("Polynomial 1: \n");
	for(i = 0 ; i < n1 ; i++){
		printf("Enter term %d coefficient: ", i+1);
		scanf("%d" , &p[i].coeff);
		printf("Enter term %d exponent: ", i+1);
		scanf("%d" , &p[i].expo);
	}
	endA = i;
	printf("\nPolynomial 2: \n");
	for(i = 0 ; i < n2 ; i++){
		printf("Enter term %d coefficient: ", i+1);
		scanf("%d" , &p[endA + i + 1].coeff);
		printf("Enter term %d exponent: ", i+1);
		scanf("%d" , &p[endA + i + 1].expo);
	}
	i = 0;
	j = 0;
	int k = 0;
	while(i < n1 && j < n2){
		if(p[i].expo >  p[endA + j + 1].expo){
			q[k].expo = p[i].expo;
			q[k].coeff = p[i].coeff;
			i++;
		}
		else if(p[i].expo <  p[endA + j + 1].expo){
			q[k].expo = p[endA + j + 1].expo;
			q[k].coeff = p[endA + j + 1].coeff;
			j++;
		}
		else if(p[i].expo ==  p[endA + j + 1].expo){
			q[k].expo = p[endA + j + 1].expo;
			q[k].coeff = p[endA + j + 1].coeff + p[i].coeff;
			j++;
			i++;
		}
		k++;
	}
	while(i < n1){
		q[k].coeff = p[i].coeff;
		q[k].expo = p[i].expo;
		i++;
		k++;
	}
	while(j < n2){
		q[k].expo = p[endA + j + 1].expo;
		q[k].coeff = p[endA + j + 1].coeff;
		j++;
		k++;
	}
	for(i = 0 ; i < k ; i++){
		printf("%dx^%d + " , q[i].coeff , q[i].expo);
	}
	printf("0\n");
}