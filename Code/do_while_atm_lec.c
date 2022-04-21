#include<stdio.h>

int main()
{
	int pin,amt,ch,tch,damt,wamt;
	int bal=0;
	int sbal=2000,cbal=2000;
	int trepeat;
	int wag=0;
	
	printf("\n -----Welcome to SBI BANK----- ");
	
	do{
	
	printf("\n Enter a PIN Number = ");
	scanf("%d",&pin);
	
	if(pin==1111 || pin==2222 || pin==3333|| pin==4444)
	{
		printf("\n Please Select Account");
		printf("\n Press - 1 For Saving Account");
		printf("\n Press - 2 For Current Account");
		scanf("%d",&ch);
		
		if(ch==1)
		{
			printf("\n You have Selected Saving Account");
			printf("\n Press - 1 For Deposit  = ");
			printf("\n Press - 2 For Withdraw = ");
			scanf("%d",&tch);
			
			if(tch==1)
			{
				printf("\n Please Enter the Amount for Deposit = ");
				scanf("%d",&damt);
				
				sbal=sbal+damt;
				
				printf("\n Balance after Deposit is = %d ",sbal);
			}
			else if(tch==2)
			{
				printf("\n Please Enter the Amount for Withdraw = ");
				scanf("%d",&wamt);
				
				if(wamt>bal)
				{
					printf("\n You have Insufficient Balance");
					printf("\n You are tryling to withdraw %d",wamt);
					printf("\n You have Balance is = %d",sbal);
				}
				else
				{
				
					sbal=sbal-wamt;
					
					
					wag++;
					
					if(wag>2)
					{
						printf("\n You have crossed transaction limit");
						printf("\n You have charged Rs 500 ");
						
						sbal=sbal-500;
					}
					printf("\n Balance after Withdraw is = %d",sbal);
				}
			}
			else
			{
				printf("\n Invalid Trancation Choiec ");
			}
			
		}// saving account code
		else if(ch==2)
		{
			printf("\n You have Selected Current Account");
			printf("\n Press - 1 For Deposite = ");
			printf("\n Press - 2 For Withdraw = ");
			scanf("%d",&tch);
			
			
			if(tch==1)
			{
				printf("\n Please Enter Amount For Deposite = ");
				scanf("%d",&damt);
				
				cbal=cbal+damt;
				cbal=cbal-100;
				printf("\n Your Balance is = %d ",cbal);
			}
			else if(tch==2)
			{
				printf("\n Please Enter Amount For Withdraw = ");
				scanf("%d",&wamt);
				
				if(wamt>cbal)
				{
					printf("\n You have Insufficent Balance ");
					printf("\n You are Traying to Withdraw %d",wamt);
					printf("\n You are Balance is = %d",cbal);
				}
				else
				{
					cbal=cbal-wamt;
					printf("\n Please Waith For Transaction ");
					
					wag++;
					
					if(wag>5)
					{
						printf("\n You have Crossed the Trancastion Limit ");
						printf("\n You have charged Rs 1000 ");
						
						cbal=cbal-1000;
						
					}
					printf("\n Your Balance after withdrawal is = %d ",cbal);
				}
				
			} 
			else
				{
					printf("\n Invalid Transaction Code ");
				}			   
		}// current account code
		else 
		{
			printf("\n Invalid Choice For Account");
		}
	}
	else
	{
		printf("\n Invalid PIN Number");
		printf("\n Please try again");
	}
	
	printf("\n Are You Interested For Doing Transaction Again");
	printf("\n Press - 1 For Cotinue = ");
	printf("\n Press - 2 For Exit    = ");
	scanf("%d",&trepeat);
	
	}while(trepeat==1);
	
		printf("\n ----- Thank You Visit Again -----");
	
	return 0;
	
}
