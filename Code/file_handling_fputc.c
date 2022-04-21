#include<stdio.h>

int main()
{
	FILE *fp;
	
	fp=fopen("MyData.txt","w");
	
	fputc('A',fp);
	
	printf("\n Data Write in File Successfully");
	
	fclose(fp);
			
	return 0;
}
