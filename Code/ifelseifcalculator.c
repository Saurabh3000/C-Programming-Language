#include<stdio.h>

int main()
{
	int ch,a,b,res;
	
	printf("\n Basic Arithmatic Calculator");
	printf("\n 1. Addition ");
	printf("\n 2. Substraction ");
	printf("\n 3. Multiplication ");
	printf("\n 4. Division ");
	printf("\n 5. Mode ");
	
	printf("\n Enter a Operation Number = ");
	scanf("%d",&ch);
	
	if(ch==1) //addition
	{
		printf("\n Enter 1st Number = ");
		scanf("%d",&a);
		printf("\n Enter 2nd Number = ");
		scanf("%d",&b);
		
		res=a+b;
		printf("\n Addtion is = %d",res);
	}
	
	else if(ch==2) //substraction
	{
		printf("\n Enter 1st Number = ");
		scanf("%d",&a);
		printf("\n Enter 2nd Number = ");
		scanf("%d",&b);
		
		res=a-b;
		printf("\n Substraction is = %d",res);
	}
	
	else if(ch==3) //multiplication
	{
		printf("\n Enter 1st Number = ");
		scanf("%d",&a);
		printf("\n Enter 2nd Number = ");
		scanf("%d",&b);
		
		res=a*b;
		printf("\n Multiplication is = %d",res);
	}
	
	else if(ch==4)   //division
	{
		printf("\n Enter 1st Number = ");
		scanf("%d",&a);
		printf("\n Enter 2nd Number = ");
		scanf("%d",&b);
		
		res=a/b;
		printf("\n Division is = %d",res);
	}
	
	else if(ch==5)
	{
		printf("\n Enter 1st Number = ");
		scanf("%d",&a);
		printf("\n Enter 2nd Number = ");
		scanf("%d",&b);
		
		res=a%b;
		printf("\n Mode is = %d",res);
	}
	
	else
	{
		printf("\n You Enter Wrong Choice");
	}
	
	return 0;
}
