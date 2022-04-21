/* Design function discount() which will print discount amount by pssing bill amount as argument to function.
IF bill more than 3000 discount is 10 %, IF bill more than 5000 discount is 20 %, IF bill more than 7000 
discount is 30. Accept Quantity and Rate from User. */


#include<stdio.h>

float discount(int bill)
{
	if(bill>7000)
	{
		float dis=0.30;          
		float fbill;
		
		fbill=bill*dis;
		
		printf("\n Your Discount is = %0.2f",fbill);
	}
	else if(bill>5000)
	{
		float dis=0.20;
		float fbill;
		
		fbill=bill*dis;
		
		printf("\n Your Discount is = %0.2f",fbill);
	}
	else if(bill>3000)
	{
		float dis=0.10;
		float fbill;
		
		fbill=bill*dis;
		
		printf("\n Your Discount is = %0.2f",fbill);
	}
	else
	{
		printf("\n You are Not Applicable For discount ");
	}
	
}
int main()
{
	int bill,rate,qty;
	float tdis;
	
	printf("\n Enter a Rate 0f Product is = ");
	scanf("%d",&rate);
	
	printf("\n Enter a Quantity of Product is = ");
	scanf("%d",&qty);
	
	bill=rate*qty;
	
	discount(bill);
	
	return 0;
}
