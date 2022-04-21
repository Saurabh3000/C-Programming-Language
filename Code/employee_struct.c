#include<stdio.h>

struct Employee
{
	char name[10];
	int wg;
	int wd;
	char job[10];
	char gender[10];
};

int main()
{
	struct Employee e;
	
	printf("\n Enter the Employee Name = ");
	//gets(name);
	scanf("%s",e.name);
	
	printf("\n Enter Employee Wages = ");
	scanf("%d",&e.wg);
	
	printf("\n Enter Employee Working Days = ");
	scanf("%d",&e.wd);
	
	printf("\n Enter the Job of Employee = ");
	scanf("%s",e.job);
	
	printf("\n Enter the Employee Gender = ");
	scanf("%s",&e.gender);
	
	
	int pay=e.wg * e.wd;
	
	
	printf("\n Employee Name is = %s",e.name);
	printf("\n Employee Job is = %s",e.job);
	printf("\n Employee Gender is = %s",e.gender);
	printf("\n Payment of Employee is = %d",pay);
	
	return 0;
}
