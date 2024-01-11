#include <stdio.h>
#include <stdlib.h>
int main(){
	//Declaration in calloc:
	int A[5]= {1,2,3,4,5};
	int i;
	for(i=0; i<5; i++){
		A[i]++;
		printf("%d", A[i]);
	}
}
