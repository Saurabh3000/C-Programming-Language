#include<stdio.h>

int main()
{
	int a[5][5];
	int i,j;
	
	printf("\n Enter a Value of 5 * 5 Matrix = ");
	for(i=0;	i<=4;	i++)
	{
		for(j=0;	j<=4;	j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("\n Mtrix Values are = \n");
	for(i=0;	i<=4;	i++)
	{
		for(j=0;	j<=4;	j++)
		{
			if(a[i][j]==4 || a[i][j]==7)
			{
				printf(" ");
			}
			else
			{
			
			printf(" %d ",a[i][j]);
			}	
		}
		
		printf("\n");
	}
	
	
	
	return 0;
}
