//wap to read color code and print color name.

#include<stdio.h>

int main()
{
	char ch;
	
	printf("\n Enter a Choice for Color = ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'R':
		case 'r':printf("\n RED ");
				break;
		
		case 'G':
		case 'g':printf("\n Green ");
				break;
				
		case 'Y':
		case 'y':printf("\n Yellow ");
				break;
				
		default:printf("\n You enter Invalid choice");
				//break;
	}
	return 0;
}
