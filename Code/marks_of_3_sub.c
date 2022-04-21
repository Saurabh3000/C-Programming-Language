#include<stdio.h>

int main()
{
	int s1,s2,s3,tm;
	float per;
	int f=0;
	
	printf("\n Enter a Marks of Subject 1 = ");
	scanf("%d",&s1);
	
	printf("\n Enter a Marks of Subject 2 = ");
	scanf("%d",&s2);
	
	printf("\n Enter a Marks of Subject 3 = ");
	scanf("%d",&s3);
	
	tm=s1+s2+s3;
	printf("\n Total Marks = %d",tm);
	
	per=tm/3;
	printf("\n Percentage is = %0.2f",per);
	
	if(s1>=40 && s2>=40 && s3>=40)
	{
		printf("\n You are Pass");
		if(per>=60)
		{
			printf("\n You Got First Class");
		}
	}
	else
	{
		if(s1<40)
		{
			printf("\n Fail in 1st Subject");
			f++;
		}
		if(s2<40)
		{
			printf("\n Fail in 2nd Subject");
			f++;
		}
		if(s3<40)
		{
			printf("\n Fail in 3rd Subject");
			f++;
		}
		printf("\n Sorry You are Fail in Total Subject is = %d",f);
	}
	return 0;
}
