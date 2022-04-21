#include<stdio.h>


int payment(int wg, int wd)
{
	int pay;
	
	pay=wg*wd;
	
	return pay;
}
int main()
{
	int wg,wd;
	int pay1,pay2,pay3;
	int tpay;
	
	printf("\n Enter a Employee Working Days = ");     //for 1st Employee
	scanf("%d",&wg);
	printf("\n Enter a Employee Wages =  ");
	scanf("%d",&wd);
	
	pay1=payment(wg,wd);
	
	printf("\n Payment of 1st Employee is = %d ",pay1);
	
	
	printf("\n Enter a Employee Working Days = ");      //for 2nd Employee
	scanf("%d",&wg);
	printf("\n Enter a Employee Wages =  ");
	scanf("%d",&wd);
	
	pay2=payment(wg,wd);
	
	printf("\n Payment of 1st Employee is = %d ",pay2);
	
	
	printf("\n Enter a Employee Working Days = ");      //for 3rd Employee
	scanf("%d",&wg);
	printf("\n Enter a Employee Wages =  ");
	scanf("%d",&wd);
	
	pay3=payment(wg,wd);
	
	printf("\n Payment of 1st Employee is = %d ",pay3);
	
	tpay=pay1+pay2+pay3;
	printf("\n Total Payment Gives to Employee is = %d",tpay);
	
	
	return 0;
}
