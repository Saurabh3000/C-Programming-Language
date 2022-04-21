#include<stdio.h>

int main()
{
	char str1[10];
	int i,c=0,w=0;
	
	printf("\n Enter a String = ");
	gets(str1);
	
	i=0;
	
	while(str1[i]!='\0')
	{
		c++;
		
		i++;
	}
	
	printf("\n Length of String is = %d",c);
	
	
	i=0;
	
	while(str1[i]!='\0')
	{
		if(str1[i]==" ")
		{
			w++;
		}
		i++;
	}
	
	printf("\n Total Word in the String is = %d",w);
	
	return 0;
}
