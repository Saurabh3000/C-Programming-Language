#include<stdio.h>

int lar(int a, int b)
{
	
	if(a>b){
		return a;
	}
	else if(b>a)
	{
		return b;
	}
	else{
		printf("\n Two Number are equal");
	}
}

int main()
{
	int a,b;
	int res;
	
	printf("\n Enter a 1 Number = ");
	scanf("%d",&a);
	
	printf("\n Enter a 2 number = ");
	scanf("%d",&b);
	
	res=lar(a,b);
	printf("\n The Largest Number is = %d ",res);
	
	return 0;
}
