#include<stdio.h>
#include<string.h>

int main()
{
	char str1[10],str2[10],rstr[10];
	int ch,rch,num;
		
	printf("\n Enter a 1st String = ");
	scanf("%s",&str1);
	
	printf("\n Enter a 2nd String = ");
	scanf("%s",&str2);
	
	do{
		
	printf("\n 1. Leanth");
	printf("\n 2. String Copy");
	printf("\n 3. String Same ");
	printf("\n 4. Concat String");
	
	printf("\n Enter a Operation No = ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:printf("\n Length of String1 is = %d",strlen(str1));
				break;
		
		case 2:printf("\n String1 is Copy in Result String = %s",strcpy(rstr,str1)); 
				break;
				
		case 3:num=strcmp(str1,str2); 
				if(num==0) 
				{
					printf("\n String Are Same "); 
				}
				else
				{
				  
					printf("\n Strin Are Not Same ");
				}
				break;
				
		case 4:printf("\n Concate the two string = %s",strcat(rstr,str2)); 
				break;
				
		default:printf("\n You Enter Invalid Choice");	
	}
	
	printf("\n Exicute Again ?");
	printf("\n Press-1 for Continue \n Press-2 for Exit");
	scanf("%d",&rch);
	
}while(rch==1);
	return 0;
}
