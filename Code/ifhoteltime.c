#include<stdio.h>

int main()
{
	int time;
	
	printf("\n Enter time = ");
	scanf("%d",&time);
	
	if(time>=10 && time<22 )
	{
		printf("\n Hostel is Open");
		if(time>=14 && time<=18)
		{
		printf("\n Happy Hours...");
		printf("\n Buy 1 get 1 Free");
		}	
	}
	else
	{
		if(time>=22 && time<=24)
		{
			printf("\n Get order and Go Home");
			printf("\n Buy 1 get 3 Free");
		}
		printf("\n Sorry at that Time Hotel is closed");
	}
	return 0;
}
