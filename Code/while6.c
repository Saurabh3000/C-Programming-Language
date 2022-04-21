#include<stdio.h>

int main()
{
	int i=2;
	
	while(i<=20)
	{
		if(i<5 || i>9 && i<12 || i>17)
		printf(" %d ",i);
		
		i++;
	}
	return 0;
}
