#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int i;
	printf("Enter the size of array\n");
	scanf("%d", &n);
	//int A[n]; -> not allowed 
	//Compilation error
	int *A= (int*)malloc(n*sizeof(int));//dynamically allocated
	//size of array =n;
	for(i=0; i<n; i++){
		A[i]= i+1;
	}
	for(i=0; i<n; i++){
		printf("%d ", A[i]);
	}
}
