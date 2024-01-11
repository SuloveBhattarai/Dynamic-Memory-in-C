#include <stdio.h>
void sum(int A[]){
	int i, sum=0;
	int size= sizeof(A)/sizeof(A[0]);
	for(i=0; i<size; ++i){
		sum= A[i]+sum;
	}
	printf("Sum is: %d", sum);
}
int main(){
	int A[]= {1,2,3,4,5};
	int size= sizeof(A)/sizeof(A[0]);
	sum(A);
}
