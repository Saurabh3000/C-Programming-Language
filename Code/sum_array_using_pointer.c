#include<stdio.h>

int main()
{
	int num[]={10,20,30,40,50};
	int *p,i,sum=0;
	
	p=num;
	
	for(i=0;	i<=4;	i++)
	{
		printf("\n %d",*p);
		
		sum=sum+*p++;
	}
	
	printf("\n Sum of All Array Element = %d",sum);
	
	return 0;
}
