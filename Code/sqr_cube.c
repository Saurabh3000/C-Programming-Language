#include<stdio.h>

int main()
{
	int i=2;
	int sqr=0;
	int cub=0;
	
	while(i<=5)
	{
		sqr=sqr+i*i;
		
		cub=cub+i*i*i;
		
		i++;
	}
	
	printf("\n Sum Sqr = %d ",sqr);
	printf("\n Sum Cube = %d",cub);
	
	return 0;
}
