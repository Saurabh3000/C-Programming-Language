#include<stdio.h>

int main()
{
	int a=10,b=20;
	int *p, *q;
	
	p=&a;   //storing address of a
	q=&b;  //storing address of b
	
	printf("\n Result is = %d",a);
	
	printf("\n Result is = %d", *p);
	
	
	printf("\n Result is = %d",b);
	
	printf("\n Result is = %d", *q);
	
	
	
	return 0;
}
