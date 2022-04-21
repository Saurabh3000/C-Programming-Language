#include<stdio.h>

int main()
{
	FILE *fp;
	char ch;
	
	fp=fopen("Abc.txt","r");   //open the file for reading purposed.
	
	while(fp)
	{
		ch=getc(fp);
		
		printf("%c",ch);
		
		if(ch==EOF) //End Of File.
		{
			break; //exit to while loop.
		}
	}
	
	
	return 0;
}
