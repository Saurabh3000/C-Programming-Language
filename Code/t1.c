#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
void main() 
{ 
char str1[10],rstr[10],str2[10]; 
int num; 
//clrscr(); 
printf("\n Enter a String1 = "); 
scanf("%s",&str1); 
printf("\n Enter a String2 = "); 
scanf("%s",&str2); 

printf("\n Length of String1 is = %d",strlen(str1)); 

printf("\n String1 is Copy in Result String = %s",strcpy(rstr,str1)); 

num=strcmp(str1,str2); 
if(num==0) 
printf("\n String Are Same "); 

else 
printf("\n Strin Are Not Same "); 
printf("\n Concate the two string = %s",strcat(rstr,str2)); 
getch(); 
}

