#include<stdio.h>

int main()
{
	FILE *fp,*fpj,*fpi;
	char ch;
	
	fp=fopen("MixData.txt","r");
	
	while(fp)
	{
		ch=getc(fp);
		
		if(ch>=65 && ch<=90)
		{
			fpj=fopen("japan.txt","w");
			fprintf(fpj,"%c",ch);
		}
		
		if(ch>=97 && ch<=122)
		{
			fpi=fopen("india.txt","w");
			fprintf(fpi,"%c",ch);
		}
		
		if(ch==EOF)
		{
			break;
		}
	}
	
	printf("\n Data Opreation Completed Successfully");
	
	return 0;
}
