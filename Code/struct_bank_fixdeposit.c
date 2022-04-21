#include<stdio.h>

struct bank
{
	char bname[10];
	char branch[10];
	char city[10];
};

struct fixdet
{
	int lsamt;
	int noy;
	float roi;
};

void show_info(struct bank bx, struct fixdet fx)
{
	printf("\n Bank Name is = %s",bx.bname);
	printf("\n Branch Name is = %s",bx.branch);
	printf("\n City is = %s",bx.city);
	printf("\n Your Enter Lumsum Amount is = %d",fx.lsamt);
	printf("\n No fo Year is = %d",fx.noy);
	printf("\n Rate of Intrest is = %f",fx.roi);
	
	
	
	int iamt=fx.lsamt*fx.noy*fx.roi;
	
	int mamt=iamt+fx.lsamt;
	
	printf("\n Intrest Amount is = %d",iamt);
	
	printf("\n Maturity Amount is = %d",mamt);
}

int main()
{
	struct bank b;
	struct fixdet f;
	
	printf("\n Enter Lausum Amount = ");
	scanf("%d",&f.lsamt);
	
	printf("\n Enter No of Year = ");
	scanf("%d",&f.noy);
	
//	printf("\n Enter Rate of Intrest = ");
//	scanf("%d",&f.roi);
	
	f.roi=0.10;
	
	printf("\n Enter Bank Name = ");
	scanf("%s",b.bname);
	
	printf("\n Enter Branch Name = ");
	scanf("%s",b.branch);
	
	printf("\n Enter City = ");
	scanf("%s",b.city);
	
	show_info(b,f);
}
