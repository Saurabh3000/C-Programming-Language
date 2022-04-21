#include<stdio.h>

int main()
{
	int age;
	
	printf("\n Enter Your Age = ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\n You are Eligible for voting");
		if(age>70)
		{
			printf("\n Traveling Facility is Avaiable");
		}
	}
	else
	{
		printf("\n You are not Eligible for voting");
	}
	return 0;
	
}
