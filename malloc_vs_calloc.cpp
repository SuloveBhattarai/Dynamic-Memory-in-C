#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int i;
	printf("Enter the size\n");
	scanf("%d", &n);
	int *A= (int*)calloc(n, sizeof(int));
	for(i=0; i<n; i++){
		A[i]= i+1;
	}
	for(i=0; i<n; i++){
		printf("%d ", A[i]);
	}
}
