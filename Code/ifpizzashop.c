#include<stdio.h>

int main()
{
	int floor;
	
	printf("\n Enter Floor No = ");
	scanf("%d",&floor);
	
	if(floor==4 || floor==7)
	{
		printf("\n Pizza Shop Available");
	}
	else
	{
		printf("\n Pizza Shop Not Available");
	}
	return 0;
}
