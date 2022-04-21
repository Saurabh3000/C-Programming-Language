#include<stdio.h>

struct college
{
	char cname[10];
	char city[10];
};

struct student
{
	char name[10];
	int phy;
	int chem;
	int math;
};

void show_info(struct college cx, struct student sx)
{
	printf("\n Student Name is = %s",sx.name);
	printf("\n College Name = %s",cx.cname);
	printf("\n City Name is = %s",cx.city);
	printf("\n Phyasics Subject Mark = %d",sx.phy);
	printf("\n Chemistry Subject Mark = %d",sx.chem);
	printf("\n Mathamatics Subject Mark = %d",sx.math);
	
	int tm=sx.phy+sx.chem+sx.math;
	printf("\n Total Mark is = %d",tm);
	
	float per=tm/3;
	
	if(per>=75)
	{
		printf("\n You got A Grade");
		printf("\n Percentage is = %0.2f",per);
	}
	else if(per<75 && per>=60)
	{
		printf("\n You got B Grade");
		printf("\n Percentage is = %0.2f",per);
	}
	else if(per<60 && per>=50)
	{
		printf("\n You got C Grade");
		printf("\n Percentage is = %0.2f",per);
	}
	else if(per>40 && per<50)
	{
		printf("\n You got D Grade");
		printf("\n Percentage is = %0.2f",per);
	}
	else
	{
		printf("\n Student is Fail");
	}
}

int main()
{
	struct college c;
	struct student s;
	
	printf("\n Enter Student Name = ");
	scanf("%s",s.name);
	
	printf("\n Enter College Name = ");
	scanf("%s",c.cname);
	
	printf("\n Enter City Name = ");
	scanf("%s",c.city);
	
	printf("\n Enter Phyasics Mark = ");
	scanf("%d",&s.phy);
	
	printf("\n Enter Chemistry Mark = ");
	scanf("%d",&s.chem);
	
	printf("\n Enter Mathamatics Mark = ");
	scanf("%d",&s.math);
	
	show_info(c,s);
	
	return 0;
}
