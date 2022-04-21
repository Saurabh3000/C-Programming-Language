#include<stdio.h>

int main()
{
	int phy,che,math,result;
	float per;
	printf("\n Enter Phaysics, Chemestry and Maths mark = ");
	scanf("%d%d%d",&phy,&che,&math);
	
	result=phy+che+math;
	per=result/3.0;
	printf("\n Percentage is = %0.2f",per);
		
	if(phy>=40 && che>=40 && math>=40)
	{
		printf("\n You are Pass");
		if(per>=60)
		{
		
		printf("\n You got First Class");
		}
	}
	else
	{
		printf("\n You are Fail");
	}
	return 0;
}
