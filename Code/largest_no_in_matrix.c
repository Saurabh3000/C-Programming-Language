#include<stdio.h>

int main()
{
	int a[3][3];
	int i,j;
	int g=0; 
	
	printf("\n Enter a value 3 * 3 matrix = ");
	
	for(i=0;	i<=2;	i++)
	{
		for(j=0;	j<=2;	j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	g=a[0][0];
	
	printf("\n Value of Matrix 3 * 3 = \n");
	
	for(i=0;	i<=2;	i++)
	{
		for(j=0;	j<=2;	j++)
		{
			printf(" %d ",a[i][j]);
			if(g<a[i][j])
			{
				g=a[i][j];
			}
		}
		printf("\n");
	}
	
	printf("\n Largest No in 3 * 3 Matrix is = %d",g);
	
	return 0;
}
