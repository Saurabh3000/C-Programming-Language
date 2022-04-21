#include<stdio.h>

int main()
{
	int i,n=0;
	int s=0;
	int c=0;
	float m;
	
	
	printf("\n Enter How many element you want to store = ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\n Enter a Array Element = ");
	for(i=0;	i<n;	i++)
	{
		scanf(" %d ",&a[i]);
		
		s=s+a[i];
		
		c++;
	}
	

	
	printf("\n All Array Element are = \n ");
	for(i=0;	i<n;	i++)
	{
		printf("%d",a[i]);
	}
	
	m=s/c;
	
	printf("\n Sum of All Element are = %d",s);
	printf("\n Mean is = %f",m);
	
	
	return 0;
}
