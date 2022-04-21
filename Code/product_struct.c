#include<stdio.h>

struct product
{
	char pname[10];
	int rate;
	int qty;
};

int main()
{
	struct product p1,p2;
	
	printf("\n Enter the Product Name = ");
	scanf("%s",p1.pname);
	
	printf("\n Enter the Product Rate = ");
	scanf("%d",&p1.rate);
	
	printf("\n Enter the Product Quantity = ");
	scanf("%d",&p1.qty);
	
	int bill=p1.rate*p1.qty;                               //1st Product Bill
		
	printf("\n The Bill of Product 1st is = %d",bill);
	
						//Accept 2nd Product
	
	printf("\n Enter the Product Name = ");
	scanf("%s",p2.pname);
	
	printf("\n Enter the Product Rate = ");
	scanf("%d",&p2.rate);
	
	printf("\n Enter the Product Quantity = ");
	scanf("%d",&p2.qty);
	
	int bill1=p2.rate*p2.qty;                               //2nd Product Bill
	
	printf("\n The Bill of Product 2nd is = %d",bill1);
	
	
	
	int fbill=bill+bill1;                                           //final Bill
	
	printf("\n The Total Final Bill is =  %d",fbill);
	
	return 0;
}
