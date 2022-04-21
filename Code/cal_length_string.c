#include<stdio.h>

int main()
{
	char str1[20];
	int i;
	int c=0;
	
	printf("\n Enter the String = ");
	gets(str1);
	
	i=0;
	
	while(str1[i]!='\0')
	{
		c++;
		
		i++;
	}
	
	printf("\n Length of String is = %d",c);
	return 0;
}
