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
	printf("\n Total Bill of Product = %d",bill);
	
	if(bill>=)
	{
		dis=bill*0.40;
		fbill=bill-dis;
		printf("\n Discount of the product is = %d",fbill);
		
	}
	else
	{
		printf("\n No Discount Not Eligible ")
	}
	
	printf("\n Thank You For Shopping");
	return 0;
}
