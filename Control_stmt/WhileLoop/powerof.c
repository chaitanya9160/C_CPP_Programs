#include<stdio.h>
int main()
{
    int index,base,p=1,i=1;
    printf("Enter base & index\n");
    scanf( "%d%d",&base,&index);
    
    while(i<=index)
    {
        p=p*base;
        i++;
    }
    printf("Power is: %d",p);
    return 0;
}