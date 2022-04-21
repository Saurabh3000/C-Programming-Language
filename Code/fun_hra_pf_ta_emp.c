#include<stdio.h>

float har(int bsal)              //calculate hra
{
	float hra=0.30;
	float h;
	
	h=bsal*hra;
	
	return h;
	
}

float pf(int bsal)        //calculate pf
{
	float p=0.20;
	float tpf;
	
	tpf=bsal*p;
	
	return tpf;
}


float ta(int bsal)     //calculate ta
{
	float t=0.10;
	float t_ta;
	
	t_ta=bsal*t;
	
	return t_ta;
}

int main()
{
	int bsal;
	float hr1;
	float pf1;
	float ta1;
	float total_allow;
	
	printf("\n Enter Employee Basic Salary = ");
	scanf("%d",&bsal);
	
	
	hr1=har(bsal);
	
	printf("\n HRA of Employee based on Salary = %0.2f",hr1);
	
	
	pf1=pf(bsal);
	
	printf("\n PF of Employee based on Salary = %0.2f",pf1);
	
	
//	ta1=ta(bsal);
	
	printf("\n TA of Employee based on Salary = %0.2f",ta(bsal)+pf1);
	
	
	total_allow=hr1+pf1+ta1;
	
	printf("\n Total Allowances of Employee is = %0.2f",total_allow);
	
	return 0;
}
