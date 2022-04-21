#include<stdio.h>

int main()
{
	int a[]={10,20,30,40,50,60};
	int b[]={1000,20,3000,40,50};
	int *p,*q,i;
	int c=0,c1=0;
	
	p=a;
	q=b;
	
	printf("\n 1st Array Element are = ");
	
	for(i=0;	i<=5;	i++)
	{
		printf(" %d ",*p);
		
		*p++;
		
		c++;
	}
	
	printf("\n 2nd Array Element are = ");
	
	for(i=0;	i<=4;	i++)
	{
		printf(" %d ",*q);
		
		*q++;
		
		c1++;
	}
	
	
	if(c>c1)
	{
		printf("\n 1st Array is Largest Array");
	}
	else
	{
		printf("\n 2nd Array is Largest Array");
	}
	
	return 0;
}
