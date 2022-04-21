#include<stdio.h>

int main()
{
	int a=100;
	
	int *p;
	int **q;
	
	
	p=&a; //storing address of variable
	q=&p; //storing address of poniter
	
	printf("\n Result is = %d",a);
	printf("\n Result is = %d",*p);
	printf("\n Result is = %d",**q);
	
	
	return 0;
}
