#include<stdio.h>

int main()
{
	
	int i=1;
	int ssq=0;
	int nq=0;
	
	while(i<=5)
	{
		//printf(" %d ",i);
		
		printf(" %d ",i*i);
	
		printf(" %d ",i*i*i);
		
		ssq=ssq+i*i;
		
		nq=nq+i*i*i;
		
		i++;	
		
	}
	
	printf("\n Sum of Square of 1 to 5 Number = %d",ssq);
	
	printf("\n Sum of Cube of 1 To 5 Number = %d",nq);
	return 0;
}
