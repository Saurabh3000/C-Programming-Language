#include<stdio.h>

int main()
{
	int pr,q, bill;
	
	printf("\n Enter a Product Rate = ");
	scanf("%d",&pr);
	
	printf("\n Enter a Product Quantity = ");
	scanf("%d",&q);
	
	bill=pr*q;
	printf("\n Product rate %d and Product Quantity %d \n Bill is = %d",pr,q,bill);
	
	return 0;
}
