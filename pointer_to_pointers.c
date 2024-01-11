#include <stdio.h>

int main(){
	int x=5;
	int *p;
	p= &x;
	int **q;
	q= &p;
	printf("%d\n",p);//Address of x
	printf("%d\n",*q);//Gives the value
	//which is address of x
	printf("%d\n",*p);//Value of x
	printf("%d\n",**q);// Value of x
	printf("%d\n",q);//Address of p
}
