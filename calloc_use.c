#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int i;
	printf("Enter the size of array\n");
	scanf("%d", &n);
	int *A= (int*)calloc(n,sizeof(int));//dynamically allocated
	for(i= 0; i<n; i++){
		printf("Enter values  ");
		scanf("%d", &A[i]);
		//Use scanf("%d",&A[i])
		//Or scanf("%d", A+i) to store values
		//address pointed by pointer A
	}
	printf("Output:  ");
	for(i=0; i<n; i++){
		printf("%d ", A[i]);
		//Use printf("%d", A[i])
		//Or printf("%d", A+i) to print values 
		//pointed by pointer A
	}
}
