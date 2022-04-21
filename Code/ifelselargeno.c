#include<stdio.h>

// Find large no between 2 number

/* int main()
{
	int n1,n2;
	
	printf("\n Enter 1st Number = ");
	scanf("%d",&n1);
	
	printf("\n Enter 2nd Number = ");
	scanf("%d",&n2);
	
	if(n1>n2)
	{
		printf("\n 1st Number is Large ");
	}
	else
	{
		printf("\n 2nd Number is Large ");
	}
	
	return 0;
} */

// Find large no between 3 number

int main()
{
	int n1,n2,n3;
	
	printf("\n Enter a 1st Number = ");
	scanf("%d",&n1);
	
	printf("\n Enter a 2nd Number = ");
	scanf("%d",&n2);
	
	printf("\n Enter a 3rd Number = ");
	scanf("%d",&n3);
	
	if(n1>n2 && n1>n3)
	{
		printf("\n 1st Number is Large ");
	}
	else if(n2>n1 && n2>n3)
	{
		printf("\n 2nd Number is Large ");
	
	}
	else
	{
		printf("\n 3rd Number is Large ");
	}
	
	return 0;
}
