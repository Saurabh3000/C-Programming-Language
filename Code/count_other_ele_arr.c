#include<stdio.h>

int main()
{
	int a[10];
	int i,c=0;
	
	printf("\n Enter 10 Integer Element = ");
	for(i=0;	i<=9;	i++)
	{
		scanf("%d",&a[i]);
		
		if(a[i]==7)
		{
			
		}
		else
		{
			c++;
		}	
	}
	
	printf("\n Total no of other element excluding 7 is = %d",c);
	
	return 0;
}
