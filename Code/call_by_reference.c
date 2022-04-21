#include<stdio.h>

void change(int *p)
{
	(*p)++;
	
}
int main()
{
	int a=50;
	
	printf("\n Value od a is = %d",a);
	
	change(&a);
	
	printf("\n Value of a is = %d",a);
	
	return 0;
}
