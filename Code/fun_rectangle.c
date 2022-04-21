#include<stdio.h>


int area(int l, int b)
{
	int ar;
	
	ar=l*b;
	
	return ar;
}

int perimeter(int l, int b)
{
	int per;
	
	per=2*(l+b);
	
	return per;
}

int main()
{
	int l,b;
	int ar_rect;
	int pr_rect;
	
	printf("\n Enter a Rectangle Length = ");
	scanf("%d",&l);
	
	printf("\n Enter a Rectangle Breadth = ");
	scanf("%d",&b);
	
	ar_rect=area(l,b);
	
	printf("\n Area of Rectangle is = %d",ar_rect);
	
	
	pr_rect=perimeter(l,b);
	
	printf("\n Perimeter of Rectangle is = %d",pr_rect);
	
	return 0;
}
