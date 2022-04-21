/*
Big Bazar
-------------
wap to read product name, rate, quantity and calculate bill amount
if bill amount more than 3000 then 10% discount
if bill amount more than 5000 then 20% discount
if bill amount more than 10000 then 30% discount
*/


#include<stdio.h>

int main()
{
	char pname[20];
	int r,q,bill,dis,fbill;
	
	printf("\n Enter a Product Name = ");
	scanf("%s",&pname);
	
	printf("\n Enter a Product Rate = ");
	scanf("%d",&r);
	
	printf("\n Enter a Product Quantity = ");
	scanf("%d",&q);
	
	bill=r*q;
	printf("\n Bill is = %d ",bill);
	
	if(bill>3000 && bill<5000)
	{
		dis=bill*0.10;
		fbill=bill-dis;
		printf("\n Discount on Bill is = %d",dis);
		printf("\n Kindly Pay Your Final Bill is = %d",fbill);
	}
	else if(bill>5000 && bill<10000)
	{
		dis=bill*0.20;
		fbill=bill-dis;
		printf("\n Discount on Bill is = %d",dis);
		printf("\n Kindly Pay Your Final Bill is = %d",fbill);
	}
	else if(bill>10000)
	{
		dis=bill*0.30;
		fbill=bill-dis;
		printf("\n Discount on Bill is = %d",dis);
		printf("\n Kindly Pay Your Final Bill is = %d",fbill);
	}
	else
	{
		printf("\n Sorry No Any Discount Available on Your Bill");
	}
	return 0;
}
