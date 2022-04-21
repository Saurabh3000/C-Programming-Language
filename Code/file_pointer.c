#include<stdio.h>

int main()
{
	FILE *ptr;    //pointer for File
	char name[10];
	char city[10];
	
	printf("\n Enter the Name = ");
	scanf("%s",&name);
	
	printf("\n Enter the City = ");
	scanf("%s",&city);

	ptr=fopen("sits.txt","w");     //file create for writting purpose
	fprintf(ptr,"Name is = %s",name);
	
	fprintf(ptr,"\n City Name is = %s",city);
	
	printf("\n Data write in File Successfullu...");
	printf("\n Please Check the File");

	fclose(ptr);
	
	return 0;


}
