#include<stdio.h>

int main()
{
	char pname[10];
	int rate,qty,bill,ch,fbill,dis,cash;
	
	do{
	
		printf("\n Enter a Product Name = ");
		scanf("%s",&pname);
		
		printf("\n Enter a Product Rate = ");
		scanf("%d",&rate);
		
		printf("\n Enter a Product Quantity = ");
		scanf("%d",&qty);
		
		bill=rate*qty;
		
		printf("\n Bill Amount is = %d ",bill);
		
		fbill=fbill+bill;
		
		printf("\n\n Are You Intersted to Buy More ?");
		printf("\n Press - 1 for Continue");
		printf("\n Press - 2 for Exit");
		scanf("%d",&ch);
		
	}while(ch==1);
	
	if(fbill>=300)
	{
		dis=fbill*0.30;
		printf("\n Disscount is = %d",dis);
		fbill=fbill-dis;
	}
	else
	{
		printf("\n Sorry you are Not Applicable For Discount ");
	}
	
	printf("\n Final Total Bill is = %d",fbill);
	
	
	printf("\n Enter a Cash Amount = ");
	scanf("%d",&cash);
	
	cash=cash-fbill;
	
	printf("\n Return Amount is = %d",cash);
	
	printf("\n --------Thank You for Shopping--------");
	return 0;

}
