#include<stdio.h>

int main()
{
	char pname[10];
	int r,q,bill,dis,fbill;
	
	printf("\n Enter a Product Name = ");
	scanf("%s",&pname);
	
	printf("\n Enter a Product Rate = ");
	scanf("%d",&r);
	
	printf("\n Enter a Product Quantity = ");
	scanf("%d",&q);
	
	bill=r*q;
	printf("\n Total Bill of Product = %d",bill);
	
	if(bill>=10000)
	{
		dis=bill*0.30;
		fbill=bill-dis;
		printf("\n Discount Bill is = %d",fbill);
	}
	else
	{
		printf("\n Discount not Eligible");
	}
	
	printf("\n -----Thank You For Shopping-----");
	return 0;
}
