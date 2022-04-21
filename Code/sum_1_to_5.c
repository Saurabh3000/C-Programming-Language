#include<stdio.h>

int main()
{
	int i=1;
	int sum=0;
	
	while(i<=5)
	{
		printf(" %d",i);
		sum=sum+i;
		i++;
	}
	printf("\n Sum is = %d",sum);
	return 0;
}
