#include<stdio.h>

int main()
{
	
	int a1[2][2],a2[2][2],res[2][2],i,j;
	
	printf("\n Enter 1st Array Element =  ");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	
	printf("\n 1st Array Elements are = \n ");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a1[i][j]);
		}
		printf(" \n ");
	}
	
	printf("\n Enter 2nd Array Element = ");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	
	printf("\n 2nd Array Elements are = \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a2[i][j]);		
		}
		printf(" \n ");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			res[i][j]=a1[i][j]*a2[i][j];
		}
	}
	
	printf("\n Multiplication of 2 Matrix");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",res[i][j]);
		}
		printf(" \n ");
	}
	return 0;
}
