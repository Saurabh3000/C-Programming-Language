#include<stdio.h>

int main()
{
	int a=100, b=200;
	int *ptr;
	
	ptr=&a;
	
	printf("\n Value of Pointer ptr is = %d",*ptr);
	printf("\n Memoery Location of Pointer ptr is = %d",ptr);
	
	ptr=NULL;
	
	printf("\n Memoery Location of Pointer ptr is = %d",ptr);
	
	ptr=&b;
	printf("\n Value of Pointer ptr is = %d",*ptr);
	printf("\n Memoery Location of Pointer ptr is = %d",ptr);
	
	return 0;
}
