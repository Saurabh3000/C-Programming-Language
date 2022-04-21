#include<stdio.h>


int payment(int wg, int wd)
{
	int p;
	
	p=wg*wd;
	
	return p;
	
}
int main()
{
	char name[10];
	int wg,wd;
	int pay1,pay2,pay3;
	int tpay;
	
	printf("\n Enter a Working days = ");
	scanf("%d",&wd);
	
	printf("\n Enter a Wages = ");
	scanf("%d",&wg);
	
	pay1=payment(wg,wd);
	
	printf("\n Payment of 1st Employee = %d",pay1);
	
	printf("\n Enter a Working days = ");
	scanf("%d",&wd);
	
	printf("\n Enter a Wages = ");
	scanf("%d",&wg);
	
	pay2=payment(wg,wd);
	
	printf("\n Payment of 2nd Employee = %d",pay2);
	
	printf("\n Enter a Working days = ");
	scanf("%d",&wd);
	
	printf("\n Enter a Wages = ");
	scanf("%d",&wg);
	
	pay3=payment(wg,wd);
	
	printf("\n Payment of 3rd Employee = %d",pay3);
	
	tpay=pay1+pay2+pay3;
	printf("\n Total Payment of 3 Employee is = %d",tpay);
	
	return 0;
}
