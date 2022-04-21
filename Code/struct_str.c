#include<stdio.h>
#include<string.h>

struct Employee
{
	char name[10];
	int sal;
	char dept[10];
	char gender;
};

void main()
{
	struct Employee e1;
	
	strcpy(e1.name,"Arati");    //assign string value to structure member
	
	e1.sal=25000;             //assign number value to structure member
	
	strcpy(e1.dept,"Developer");
	
	e1.gender='F';
	
	
	printf("\n Employee Name is = %s",e1.name);
	
	printf("\n Employee Salary is = %d",e1.sal);
	
	printf("\n Employee Department is = %s",e1.dept);
	
	printf("\n Employee Gender is = %c",e1.gender);

	getch();
}
