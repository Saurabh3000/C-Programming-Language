// wap to read nth matrix of size and printf that element and also find element is exist or not 


#include<stdio.h>

int main()
{
	
	int x,y;
	int res=0;
	int se;
	
	printf("\n Enter a Matrix Size = ");
	scanf("%d%d",&x,&y);
	
	int a[x][y];
	int i,j;
	
	printf("\n Enter a Matrix Value = ");
	
	for(i=0;	i<x;	i++)
	{
		for(j=0;	j<y;	j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("\n Matrix Values are = \n");
	
	for(i=0;	i<x;	i++)
	{
		for(j=0;	j<y;	j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Which Element want to search = ");
	scanf("%d",&se);
	
	for(i=0;	i<x;	i++)
	{
		for(j=0;	j<y;	j++)
		{
			if(a[i][j]==se)
			{
				res=101;
				break;
			}
		}
	}
	
	if(res==101)
	{
		printf("\n Yes Element is Exist");
	}
	else
	{
		printf("\n Element is Not Exist");
	}
	
	
	return 0;
}
