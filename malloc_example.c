#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, num;
	printf("Enter number of integers: ");
	scanf("%d",&num);
	int *p= (int*)malloc(num*sizeof(int));
	if(p==NULL){ 
		printf("Memory not available");
		exit(1);
	}
	for(i=0; i<num; i++){
		printf("Enter an integer: ");
		scanf("%d",&p[i]);//No use of ampersand, cause p
		//is already pointing the address.
	}
	for(i=0; i<num; i++){
		printf("%d  ",p[i]);//Dereferencing
	}
	return 0;
}
