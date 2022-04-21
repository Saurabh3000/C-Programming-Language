#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char cname[10];
	char pname[10];
	int rate,qty;
	int bill;
	int dis;
	int fbill;
	
	printf("\n Enter User Name = ");
	scanf("%s",cname);
	
	strcat(cname,"_billing.txt");
	
	printf("\n Enter Product Name = ");
	scanf("%s",pname);
	
	printf("\n Enter Product Rate = ");
	scanf("%d",&rate);
	
	printf("\n Enter Product Quantity = ");
	scanf("%d",&qty);
	
	bill=rate*qty;
	
	
	fp=fopen(cname,"w");
	
	fprintf(fp,"Product Name is = %s",pname);
	fprintf(fp,"\n Product Rate is = %d",rate);
	fprintf(fp,"\n Product Quantity is = %d",qty);
	
	fprintf(fp,"\n Total Bill is = %d",bill);
	
	if(bill>5000)
	{
		dis=bill*0.20;
		
		fprintf(fp,"\n Disscount is = %d",dis);
	}
	
	fbill=bill-dis;
	
	fprintf(fp,"\n Final Bill is = %d",fbill);
	
	printf("\n File Created Successfully...");
	
	return 0;
	
}
