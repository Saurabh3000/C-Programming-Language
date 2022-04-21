#include<stdio.h>

struct student
{
	char sname[10];
	int phy;
	int chem;
	int math;
};

int main()
{
	struct student s;
	
	printf("\n Enter the Student Name = ");
	scanf("%s",s.sname);
	
	printf("\n Enter Marks of Phyasics = ");
	scanf("%d",&s.phy);
	
	printf("\n Enter Marks of Chemistry = ");
	scanf("%d",&s.chem);
	
	printf("\n Enter Marks of Mathamatics = ");
	scanf("%d",&s.math);
	
	int tm=s.phy+s.chem+s.math;
	
	printf("\n Student Name is = %s",s.sname);
	printf("\n Total Mark is = %d",tm);
	
	float per=tm/3;
	
	if(s.phy>=40 && s.chem>=40 && s.math>=40)
	{
		printf("\n Student is PASS");
		printf("\n Percentage is = %0.2f",per);
		if(per>=60 && per<75)
		{
			printf("\n Student get First Class");
		}
		if(per>=75)
		{
			printf("\n Student get First Class with Distingtion");
		}
	}
	else
	{
		printf("\n Student is Fail");
	}
	
	return 0;
}
