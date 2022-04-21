#include<stdio.h>

int main()
{
       int a=201,b=203,c=202;
        int x,y,z;

          x=a++;      // a=201   a=202      
        
         x=( a!=c  ? a : b);

         printf("%d",x);           //o/p  203
   
         return 0;
}
     
