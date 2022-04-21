#include<stdio.h>


struct product
{
	char pname[10];
	int rate;
	int qty;
};

void show_product_info(struct product px)
{
	int bill;
	
	printf("\n Product Name = %s",px.pname);
	printf("\n Product Rate = %d",px.rate);
	printf("\n Product Quantity = %d",px.qty);
	
	bill=px.rate*px.qty;
	
	printf("\n Product Bill is = %d",bill);
}


int main()
{
	struct product p;
	
	printf("\n Enter the Product Name = ");
	scanf("%s",p.pname);
	
	printf("\n Enter the Product Rate = ");
	scanf("%d",&p.rate);
	
	printf("\n Enter the Product Quantity = ");
	scanf("%d",&p.qty);
	
	show_product_info(p);                //passing Structure referrence to the Function.
	
	return 0;
}
