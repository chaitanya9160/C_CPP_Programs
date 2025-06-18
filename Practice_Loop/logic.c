#include<stdio.h>
int main()
{
   int i,j;
   i=j=1;
   for(;j;printf("I=%d\tJ=%d\n",i,j))
   {
    j=i++<=5;
   }
   
    return 0;
}