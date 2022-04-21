#include<stdio.h>

int main()
{
	
	int a[4][4];
	int i,j;
	
	printf("\n Enter 4 * 4 matrix values = ");
	
	for(i=0;	i<=3;	i++)
	{
		for(j=0;	j<=3;	j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("\n Transposen of Matrix 4 * 4 is = \n");
	
	for(i=0;	i<=3;	i++)
	{
		for(j=0;	j<=3;	j++)
		{
			printf(" %d ",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
