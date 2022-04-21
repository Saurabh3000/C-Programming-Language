// 


#include<stdio.h>

int main()
{
	
	int per;
	
	printf("\n Enter a Percentage = ");
	scanf("%d",&per);
	
	if(per>=75)
	{
		printf("\n A Grade ");
	}
	else if(per>=60)
	{
		printf("\n B Grade ");
	}
	else if(per>=50)
	{
		printf("\n C Grade ");
	}
	else if(per>=40)
	{
		printf("\n D Grade ");
	}
	else
	{
		printf("\n Fail ");
	}
	
	return 0;
	
}
