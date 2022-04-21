#include<stdio.h>

int main()
{
	int a[10];
	int i,c=0,c1=0;
	
	printf("\n Enter 10 Integer Element = ");
	for(i=0;	i<=9;	i++)
	{
		scanf("%d",&a[i]);
		
		if(a[i]==3)
		{
			c++;
		}
		if(a[i]==7)
		{
			c1++;
		}
	}
	
	printf("\n Total 3 are Present in Array List is = %d",c);
	printf("\n Total 7 are Present in Array List is = %d",c1);
	
	return 0;
}
