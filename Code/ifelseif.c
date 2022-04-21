#include<stdio.h>

int main()
{
	int a,b;
	
	printf("\n Enter two A and B number = ");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		printf("\n A numbers Greater");
	}
	else if(b>a)
	{
		printf("\n B number is Greater");
	}
	else
	{
		printf("\n A and B number are Same");
	}
	return 0;
}
