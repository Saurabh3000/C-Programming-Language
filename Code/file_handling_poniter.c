#include<stdio.h>

int main()
{
	FILE *ptr;    //FILE word write alwaye Capital.
	char name[10];
	int phy;
	int chem;
	int math;
	int tm;
	float per;
	int ch;
	
	do{
	
		printf("\n Enter Student Name = ");
		scanf("%s",name);
		
		printf("\n Enter Phyasics Mark = ");
		scanf("%d",&phy);
		
		printf("\n Enter Chemistry Mark = ");
		scanf("%d",&chem);
		
		printf("\n Enter Mathamatics Mark = ");
		scanf("%d",&math);
		
		tm=phy+chem+math;
		
		per=tm/3;
		
		ptr=fopen("result.txt","a");          //file create for writing and appending
		fprintf(ptr,"\n Name of Student is = %s",name);
		
		fprintf(ptr,"\n Total Mark is = %d",tm);
		
		if(phy>40 && chem>40 && math>40)
		{
			fprintf(ptr,"\n Student is Pass");
			fprintf(ptr,"\n Percentage is = %0.2f",per);
		}
		else
		{
			fprintf(ptr,"\n Studnet is Fail");
			fprintf(ptr,"\n Percentage is = %0.2f",per);
		}
		
		fprintf(ptr,"\n ----------------------------");
		
		printf("\n Data write in the File Successfully");
		printf("\n Please check the file");
		
		fclose(ptr);
		
		printf("\n Press 1 to Continue and Press- 2 to Exit");
		scanf("%d",&ch);
	
	}while(ch==1);
	
	return 0;
}
