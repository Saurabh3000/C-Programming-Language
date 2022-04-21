#include<stdio.h>

int main()
{ 
   char pname[10];
   int rate,qty,bill;
   int fbill=0;
   int choice;
   int damt;
   int cash=0;
   
 do{
 
	   printf("\n\n Enter the Product Name :");
	   scanf("%s",pname);
	   
	   printf("\n Enter the Product Rate :");
	   scanf("%d",&rate);
	   
	   printf("\n Enter the Product Quantity :");
	   scanf("%d",&qty);
	   
	   bill=rate * qty;
	   
	   printf("\n Bill amount  :%d ",bill);
	   
	   fbill=fbill+bill;
	   
	   printf("\n Wud U Like buy product again ?");
	   printf("\n Press-1 to Continue Press-2 to Exit ");
	   scanf("%d",&choice); // N
	   
	   
   }while(choice==1); 
   
       if(fbill>=10000)
	   {
	   	  damt=fbill*0.30; // 9000=30000*0.30
		  printf("\n Discount amount is :%d",damt);
		  fbill=fbill-damt; // 21000=30000-9000
		  		  	         
	   }  
	   else
	   {
	   	 printf("\n Not Applicable for Discount ...");
		} 
	 
    printf("\n kindly Pay your bill : %d ",fbill);
    
    printf("\n Enter a Cash Ammount = ");
    scanf("%d",&cash);
    
    cash=cash-fbill;
    printf("\n Return Amount is = %d",cash);
    
    printf("\n******Thank you for shopping *****\n");
   
  return 0;
 	  
}
