#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char filename[10];
	
	printf("\n Enter File Name = ");
	scanf("%s",filename);
	
	strcat(filename,".txt");
	
	fp=fopen(filename,"w");
	
	printf("\n File Created Successfully");
	
	return 0;
}
