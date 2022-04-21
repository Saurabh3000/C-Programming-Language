#include<stdio.h>

int main()
{
     int a=11,b=10,c=12;
     int x,y;

      ++a;   // a=12
       b--;   //b=9

     x=a++;  // x=12   a=13
     y=b--;   // y=9   b=8 
     
   printf("\n %d",x);  //   12           
   printf("\n %d",b); //    8          
   printf("\n %d",y); //    9      

return 0;
}
