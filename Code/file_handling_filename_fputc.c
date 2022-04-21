//wap to read file name from user and write character inside the file.

#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char fname[10];
	
	printf("\n Enter the File Name = ");
	scanf("%s",fname);
	
	strcat(fname,".txt");
	
	fp=fopen(fname,"w");
	
	fputc('A',fp);
	fputc('B',fp);
	fputc('C',fp);
	fputc('D',fp);
	
	printf("\n Data Write in File Successfully");
	
	fclose(fp);
	
	return 0;
}
