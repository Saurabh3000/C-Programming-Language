#include<stdio.h>

int main()
{
	int pcode;
	int vb=100,chkb=150; //Burger Price
	int sp=200,rp=300,lp=500;  //pizza price
	int cc=100,hc=50; //coffee price
	int ngt=200,ff=200; //naggets french fries price
	int st=30,bt=50,lt=70; //tea price
	int vi=100,bti=150,chki=50; //ice cream price
	int pch,bill,qty;
	int fbill=0;
	int ach;
		
	printf("\n 1.Burger");
	printf("\n 2.Pizza");
	printf("\n 3.Coffee");
	printf("\n 4.Naggets");
	printf("\n 5.French Fries");
	printf("\n 6.Tea");
	printf("\n 7.Ice Cream");
	
	do{
	
		printf("\n Please Select the Product Code= ");
		scanf("%d",&pcode);
	
	
	
	// code for Burger
	if(pcode==1)
	{
		printf("\n You have Selected Burger ");
		printf("\n Press - 1 for Veg Burger ");
		printf("\n Press - 2 for Chicken Burger");
		scanf("%d",&pch);
		if(pch==1)
		{
			printf("\n Enter the quantity for Veg Burger = ");
			scanf("%d",&qty);
			
			bill=qty*vb;
			printf("\n The Bill amount is = %d",bill);
		}
		else if(pch==2)
		{
			printf("\n Enter the quantity for Chicken Burger = ");
			scanf("%d",&qty);
			
			bill=qty*chkb;
			printf("\n The Bill amount is = %d",bill);
		}
		else
		{
			printf("\n Invalid Code for Burger");
		}
	} //end of burger
	
	//code for Pizza
	else if(pcode==2)
	{
		printf("\n You have Selected Pizza ");
		printf("\n 1. Small Pizaa");
		printf("\n 2. Regular Pizza");
		printf("\n 3. Large Pizza");
		scanf("%d",&pch);
		
		if(pch==1)
		{
			printf("\n Please Enter a Qunatity for Small Pizza = ");
			scanf("%d",&qty);
			
			bill=qty*sp;
			printf("\n Bill amount is = %d",bill);
		}
		else if(pch==2)
		{
			printf("\n Please Enter a Qunatity for Regulaer Pizza = ");
			scanf("%d",&qty);
			
			bill=qty*rp;
			printf("\n Bill amount is = %d",bill);
		}
		else if(pch==3)
		{
			printf("\n Please Enter a Qunatity for Large Pizza = ");
			scanf("%d",&qty);
			
			bill=qty*lp;
			printf("\n Bill amount is = %d",bill);
		}
		else
		{
			printf("\n Invalid choice for Pizza order");
		}
				
	}//end for pizza 
	
	
	//code for coffee
	
	else if(pcode==3)
	{
		printf("\n You have Selected Coffee ");
		printf("\n 1. Cold Coffee ");
		printf("\n 2. Hot Coffee ");
		scanf("%d",&pch);
		
		if(pch==1)
		{
			printf("\n Enter a Quantity for Cold Coffee = ");
			scanf("%d",&qty);
			
			bill=qty*cc;
			printf("\n Bill amount is = %d ",bill);
		}
		else if(pch==2)
		{
			printf("\n Enter a Quantity for Hot Coffee = ");
			scanf("%d",&qty);
			
			bill=qty*hc;
			printf("\n Bill amount is = %d ",bill);
		}
		else 
		{
			printf("\n Invalid code for Coffee");
		}
		
	} //end for coffee code
	
	// code for Naggets
	else if(pcode==4)
	{
		printf("\n You have Selected for Naggets ");
		printf("\n Enter a Qantity for Naggets = ");
		scanf("%d",&qty);
		
		bill=qty*ngt;
		printf("\n Bill amount is = %d",bill);
	} //end for Naggets
	
	//code for Freanch Fries
	else if(pcode==5)
	{
		printf("\n You have Selected for Freanch Fries ");
		printf("\n Enter a Qantity for Freanch Fries = ");
		scanf("%d",&qty);
		
		bill=qty*ff;
		printf("\n Bill amount is = %d",bill);
	} // end of Freanch Fries
	
	
	//code for Tea
	else if(pcode==6)
	{
		printf("\n You have Selected for Tea ");
		printf("\n 1. Special Tea ");
		printf("\n 2. Back Tea");
		printf("\n 3. Lemon Tea");
		scanf("%d",&pch);
		
		if(pch==1)
		{
		printf("\n Enter a Qantity for Special Tea = ");
		scanf("%d",&qty);
		
		bill=qty*st;
		printf("\n Bill amount is = %d",bill);
		}
		else if(pch==2)
		{
			printf("\n Enter a Qunatity for Back Tea = ");
			scanf("%d",&qty);
			
			bill=qty*bt;
			printf("\n Bill amount is = %d",bill);
		}
		else if(pch==3)
		{
			printf("\n Enter a Qunatity for Lemon Tea = ");
			scanf("%d",&qty);
			
			bill=qty*lt;
			printf("\n Bill amount is = %d",bill);
		}
		else
		{
			printf("\n Invalid code for Tea ");
		}
	} // end code for tea
	
	
	//code for Ice cream
	else if(pcode==7)
	{
		printf("\n You have Selected for Ice Cream ");
		printf("\n 1. Vanilla ");
		printf("\n 2. Butterchoch");
		printf("\n 3. Chocholate");
		scanf("%d",&pch);
		
		if(pch==1)
		{
			printf("\n Enter a Qunatity for Vanilla Ice Cream = ");
			scanf("%d",&qty);
			
			bill=qty*vi;
			printf("\n Bill amount is = %d",bill);
			
		}
		else if(pch==2)
		{
			printf("\n Enter a Qunatity for Butterchoch Ice Cream = ");
			scanf("%d",&qty);
			
			bill=qty*bti;
			printf("\n Bill amount is = %d",bill);
		}
		else if(pch==3)
		{
			printf("\n Enter a Qunatity for chocolte Ice Cream = ");
			scanf("%d",&qty);
			
			bill=qty*chki;
			printf("\n Bill amount is = %d",bill);
		}
		else
		{
			printf("\n Invalid code for Ice Cream ");
		}
	} //end for ice cream
	
	else
	{
		printf("\n You have Enter Wrong Choice ");
	}
	
	fbill=fbill+bill;
	printf("\n You want to continue ?");
	printf("\n 1. Continue");
	printf("\n 2. Exit");
	scanf("%d",&ach);
	
}while(ach==1);

printf("\n You Final Bill is = %d",fbill);
	return 0;
}
