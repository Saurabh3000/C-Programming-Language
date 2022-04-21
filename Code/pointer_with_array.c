#include<stdio.h>

int main()
{
	int num[]={100,200,300,400,500};
	int *p,i;
	
	p=num; //storing address of Array into pointer p
	
	for(i=0;	i<=4;	i++)
	{
		printf("\n %d",*p);
		
		*p++;
	}
	
	return 0;
	
}
