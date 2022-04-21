#include<stdio.h>

int main()
{
	int l,b,area,p;
	
	printf("\n Enter Length of Rectangle = ");
	scanf("%d",&l);
	
	printf("\n Enter Breath of Rectangle = ");
	scanf("%d",&b);
	
	area=l*b;
	printf("\n Area of Rectangle is = %d",area);
	
	p=2*(l+b);
	printf("\n Perimeter of Rectangle = %d",p);
	
	return 0;
}
