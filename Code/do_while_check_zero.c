//wap to read number which is not equal to zero and print sum all enter number
#include<stdio.h>

int main()
{
	int n;
	int sum=0;
	
	do{
		printf("\n Enter the Number = ");
		scanf("%d",&n);
		
		sum=sum+n;
		
	}while(n != 0);
	
		printf("\n Sum of All Number = %d",sum);
	return 0;
}
