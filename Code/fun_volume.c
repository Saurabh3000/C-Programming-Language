#include<stdio.h>

int volume(int l, int b, int h)
{
	int v;
	
	v=l*b*h;
	
	return v;
}

int main()
{
	int l,b,h;
	int v1,v2,v3;
	
	printf("\n Enter a Length of Box = ");         //for 1st Box
	scanf("%d",&l);
	
	printf("\n Enter a Breadth of Box = ");
	scanf("%d",&b);
	
	printf("\n Enter a Height of Box = ");
	scanf("%d",&h);
	
	v1=volume(l,b,h);
	
	printf("\n Volume of 1st Box is = %d ",v1);
	
	printf("\n\n Enter a Length of Box = ");         //for 2nd Box
	scanf("%d",&l);
	
	printf("\n Enter a Breadth of Box = ");
	scanf("%d",&b);
	
	printf("\n Enter a Height of Box = ");
	scanf("%d",&h);
	
	v2=volume(l,b,h);
	
	printf("\n Volume of 1st Box is = %d ",v2);
	
	
	v3=v1+v2;                                                //total volume of 2 box
	printf("\n\n Total Volume of 2 Box is = %d",v3);
	
	return 0;
}
