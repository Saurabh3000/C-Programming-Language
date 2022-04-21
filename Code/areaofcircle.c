#include<stdio.h>

int main()
{
	int r;
	float a,c;
	
	printf("\n Enter a Radius of Circle = ");
	scanf("%d",&r);
	
	a=3.14*r*r;
	printf("\n Area of Circle is = %0.2f",a);
	
	c=2*3.14*r;
	printf("\n Circumference of Circle is = %0.2f",c);
	
	return 0;
}
