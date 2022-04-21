//wap to read number which is not equal to zero and print sum of only even number.

#include<stdio.h>

int main()
{
	int n;
	int sum=0;
	
	do{
		printf("\n Enter the Number = ");
		scanf("%d",&n);
		
		if(n%2==0) //to check even number
		{
			sum=sum+n;
		}
	}while(n!=0);
	printf("\n Sum of All Even Number = %d",sum);
	return 0;
}
