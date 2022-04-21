#include<stdio.h>

int main()
{
	char str1[20];
	char str2[20];
	int i,a;
	int c=0,c1=0;
	
	printf("\n Enter the 1st String = ");
	gets(str1);
	
	printf("\n Enter the 2nd String = ");
	gets(str2);
	
	i=0;
	
	while(str1[i]!='\0')
	{
		c++;
		
		i++;
	}
	
	a=0;
	
	while(str2[a]!='\0')
	{
		c1++;
		
		a++;
	}
	
	printf("\n Length of 1st String is = %d",c);
	printf("\n Length of 2nd String is = %d",c1);
	
	
	if(c>c1)
	{
		printf("\n 1st String is Largest");
	}
	else if(c1>c)
	{
		printf("\n 2nd String is Largest");
	}
	else
	{
		printf("\n Both String are Same");
	}
	return 0;
}
