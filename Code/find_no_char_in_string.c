#include<stdio.h>

int main()
{
	
	char str1[10];
	int i,c=0;
	
	printf("\n Enter the String = ");
	gets(str1);
	
/*	i=0;
	
	while(str1[i] == 'A' || str1[i] == 'a')
	{
		c++;
		
		i++;
	} */
	
	for(i=0;	i<=10;	i++)
	{
		if(str1[i]=='A' || str1[i]=='a')
		{
			c++;
		}
	}
	
	printf("\n Total No of A in String is = %d",c);
	
	return 0;
}
