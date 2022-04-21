#include<stdio.h>
#include<string.h>

struct student
{
	char name[10];
	int phy;
	int che;
	int math;
};


int main()
{
	
	struct student s[5];
	
	int tm,i;
	float per;
	
	
	for(i=0;	i<=4;	i++)
	{
		printf("\n Enter %d Student Record",i+1);
		
		printf("\n Enter Student Name = ");
		scanf("%s",s[i].name);
		
		printf("\n Enter Mark of Physics Subject = ");
		scanf("%d",&s[i].phy);
		
		printf("\n Enter Mark of Chemistry Subject = ");
		scanf("%d",&s[i].che);
		
		printf("\n Enter Mark of Mathamatics Subject = ");
		scanf("%d",&s[i].math);
		
		tm=s[i].phy+s[i].che+s[i].math;
		
		per=tm/3;
		
		printf("\n Total Mark of Student is = %d",tm);
		printf("\n Percentage of Student is = %0.2f",per);
		
		printf("\n ------------------------------------------\n");
	}
}
