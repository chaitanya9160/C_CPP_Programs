#include<stdio.h>

int main()
{
    int no,f=1;
    printf("Enter no:");
    scanf("%d",&no);
    while(no!=0)
    {
        f=f*no;
        no--;
    }
    printf("Factorial is:%d",f);
    return 0;
}