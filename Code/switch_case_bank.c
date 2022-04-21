// Basic Bank Operation Program using switch case and do while loop.

#include<stdio.h>

int main()
{
	int tcode;          // Transaction Code
	int accno;		   // Account Number
	char name[10];    // Account Holder Name
	int bal;         // Account Balance
	int damt;       // Deposit Amount
	int wamt;	   // Withdraw Amount 
	int ch;       // Choice for Transaction Repite
	
	do{
	
	printf("\n Press - 1 For Account Open");
	printf("\n Press - 2 For Show Account Info");
	printf("\n Press - 3 For Money Deposit");
	printf("\n Press - 4 For Money Withdraw");
	
	printf("\n Enter Trasaction Code = ");
	scanf("%d",&tcode);
	
	switch(tcode)
	{
		case 1 :printf("\n Account Opening");
				
				printf("\n Enter Account Number = ");
				scanf("%d",&accno);
				
				printf("\n Enter Account Holder Name = ");
				scanf("%s",&name);
				
				printf("\n Enter Account Opening Balance = ");
				scanf("%d",&bal);
				
				break;
		
		case 2 :printf("\n Account Information");
				
				printf("\n Account Number = %d",accno);
				printf("\n Account Holder Name = %s",name);
				printf("\n Account Balance = %d",bal);
				
				break;
				
		case 3 :printf("\n Deposit Money");
				
				printf("\n Enter Amount For Deposit = ");
				scanf("%d",&damt);
				
				bal=bal+damt;
				printf("\n Amount After Deposit is = %d",bal);
				
				break;
				
		case 4 :printf("\n Withdraw Money");
				
				printf("\n Enter Amount For Withdraw = ");
				scanf("%d",&wamt);
				
				if(wamt>bal)
				{
					printf("\n You have Insufficient Balance");
					printf("\n Your Account Avaiable Balance is = %d",bal);
					printf("\n Please Try Again...");
				}
				else
				{
					bal=bal-wamt;
					printf("\n Amount After Withdraw is = %d",bal);
				}
				
				break;
				
		default:printf("\n You Enter Invalid Transaction Code");
	}
	
		printf("\n\n Would You Like to Continue ?");
		printf("\n Press - 1 For Continue \n Press - 2 For Exit = ");
		scanf("%d",&ch);
		
	}while(ch==1);
	
		printf("\n ----- Thank You Banking With Us -----");
	return 0;
}
