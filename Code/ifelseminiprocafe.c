#include<stdio.h>

int main()
{
	int mch,pch,qty,cbill,hcbill,spccbill,btbill,stbill,ltbill,sffbill,mffbill;
	int cc=100,hc=80,spcc=150;
	int bt=50,st=120,lt=30;
	int sff=120,mff=160;
	
	printf("\n Welcome # Tag Cafe ");
	
	printf("\n\n Meanu Items");
	printf("\n\n 1. Coffe");
	printf("\n 2. Tea");
	printf("\n 3. French Fries");
	
	printf("\n\n Enter Item Code = ");         //main item choice code
	scanf("%d",&mch);
	
	if(mch==1) // code for coffee
	{
		printf("\n 1.Cold Coffee=100 \t 2.Hot Coffee=80 \t 3.Special Coffee=150");
		printf("\n Select Code for Coffee You Want = ");
		scanf("%d",&pch);
		if(pch==1)
		{
			printf("\n Enter a Cold Coffee Quantity = ");
			scanf("%d",&qty);
			
			cbill=cc*qty;
			printf("\n Cold Coffee Bill = %d",cbill);
		}
		else if(pch==2)
		{
			printf("\n Enter a Hot Coffee Quantity = ");
			scanf("%d",&qty);
			
			hcbill=hc*qty;
			printf("\n Hot Coffee Bill = %d ",hcbill);
		}
		else if(pch==3)
		{
			printf("\n Enter a Special Coffee Quantity = ");
			scanf("%d",&qty);
			
			spccbill=spcc*qty;
			printf("\n Special Coffee Bill = %d ",spccbill);
		}
		else
		{
			printf("\n You Enter Wrong Code for Coffee ");
		}
	} //end coffee code
	
	else if(mch==2) //code for tea
	{
		printf("\n 1.Black Tea=50 \t 2.Special Tea=120 \t 3.Lemon Tea=30");
		printf("\n Select Code for Tea You Want = ");
		scanf("%d",&pch);
		
		if(pch==1)
		{
			printf("\n Enter a Black Tea Quantity = ");
			scanf("%d",&qty);
			
			btbill=bt*qty;
			printf("\n Black Tea Bill = %d",btbill);
		}
		else if(pch==2)
		{
			printf("\n Enter Special Tea Quantity = ");
			scanf("%d",&qty);
			
			stbill=st*qty;
			printf("\n Special Tea Bill = %d ",stbill);
		}
		else if(pch==3)
		{
			printf("\n Enter Lemon Tea Quantity = ");
			scanf("%d",&qty);
			
			ltbill=lt*qty;
			printf("\n Lemon Tea Bill = %d ",ltbill);
		}
		else 
		{
			printf("\n You Enter Wrong Code for Tea ");
		}
	} //end tea code
	
	else if(mch==3) // code for french fries
	{
		printf("\n 1.Simple French Fries=120 \t 2.Masala French Fries=160 ");
		printf("\n Select Code for French Fries = ");
		scanf("%d",&pch);
		
		if(pch==1)
		{
			printf("\n Enter a Simple French Fries Quantity = ");
			scanf("%d",&qty);
			
			sffbill=sff*qty;
			printf("\n Simple French Fries Bill = %d",sffbill);
		}
		else if(pch==2)
		{
			printf("\n Enter a Masala French Fries Quantity = ");
			scanf("%d",&qty);
			
			mffbill=mff*qty;
			printf("\n Masala French Fries Bill = %d",mffbill);
		}
		else
		{
			printf("\n You Enter Wrong Code for French Fries ");
		}
	} //end french fries code
	
	else 
	{
		printf("\n You Enter Wrong Item Code ");
	}
	
	return 0;
}
