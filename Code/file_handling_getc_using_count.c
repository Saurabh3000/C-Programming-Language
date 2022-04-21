#include<stdio.h>

int main()
{
	FILE *fp; //fp - file pointer
	char ch;
	int uc=0,lc=0;
	
	fp=fopen("Test.txt","r");
	
	while(fp)
	{
		ch=getc(fp);
		
		printf("%c",ch);
		
		if(ch>=65 && ch<=90)
		{
			uc++;
		}
		
		if(ch>=97 && ch<=122)
		{
			lc++;
		}
			
		if(ch==EOF)  //End Of File.
		{
		
			break;
		}
	}
	
	printf("\n No of Upper Charater = %d",uc);
	
	printf("\n No of Lower Charater = %d",lc);
	
	
	return 0;
}
