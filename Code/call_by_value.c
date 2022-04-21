#include<stdio.h>

void change(int a) //here a is parameter
{
	a++;
}

int main()
{
	int a=50;
	
	printf("\n Value of a is = %d",a);
	
	change(a);  //here a is argument
	
	printf("\n Value of a is = %d",a);
	
	return 0;
}
