/*
wap to  read age and check candidate is eligible for voting or not 
and also check if age more  70 then  pick up facility available.
and if age in range 18 to 69 then come with your self transport .
*/



#include<stdio.h>

int main()
{
	int age;
	
	printf("\n Enter Age = ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\n Eligible For Voting ");
		if(age>18 && age<=69)
		{
			printf("\n Come with your won transport");
		}
		if(age>=70)
		{
			printf("\n Pick Up Facility Availabe");
		}
	}
	else
	{
		printf("\n Not Eligible For Voting");
	}
	return 0;
}
