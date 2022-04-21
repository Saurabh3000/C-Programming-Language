#include<stdio.h>

void swap(int *p, int *q)
{
	
	(*p)=(*p)+(*q);
	(*q)=(*p)-(*q);
	(*p)=(*p)-(*q);
}

int main()
{
	int a=10;
	int b=20;
	
	printf("\n Value of A Befor Swaping = %d",a);
	printf("\n Value of B Befor Swaping = %d",b);
	
	swap(&a,&b);
	
	
	printf("\n Value of A After Swaping = %d", a);
	printf("\n Value of B After Swaping = %d", b);
	
	return 0;
}
