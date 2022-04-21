#include<stdio.h>


int square(int num)
{
	int s;
	
	s=num*num;
	
	return s;
}

int cube(int num)
{
	int c;
	
	c=num*num*num;
	
	return c;
	
}
int main()
{
	int num;
	int squ;
	int cub;
	
	printf("\n Enter a Number = ");
	scanf("%d",&num);
	
	squ=square(num);
	
	printf("\n Square of Given Number = %d ",squ);
	
	cub=cube(num);
	
	printf("\n Cube of Given Number = %d ",cub);
	
	return 0;
	
}
