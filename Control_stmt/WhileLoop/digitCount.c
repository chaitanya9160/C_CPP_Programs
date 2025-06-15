#include<stdio.h>

int main()
{
    int no,count=0;
    printf("Enter no:");
    scanf("%d",&no);
    while(no!=0)
    {
        no=no/10;
        count++;
    }
    printf("Count is:%d",count);
    return 0;
}