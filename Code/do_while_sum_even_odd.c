//wap to read number which is not equal to zero and print sum of all even and odd number separately.


#include<stdio.h>

int main()
{
	int n;
	int esum=0;
	int osum=0;
	
	do{
		
		printf("\n Enter a Number = ");
		scanf("%d",&n);
	
			if(n%2==0)
			{
				esum=esum+n;
			}
			else
			{
			osum=osum+n;
			}
			
	}while(n!=0);
	
	printf("\n Sum of All Even Number is = %d",esum);
	printf("\n Sum of All Odd Number is = %d",osum);
	
	return 0;
}
