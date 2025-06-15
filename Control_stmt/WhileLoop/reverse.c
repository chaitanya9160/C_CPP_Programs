#include<stdio.h>

int main()
{
    int no,rev=0,rem;
    printf("Enter no:");
    scanf("%d",&no);
    while(no!=0)
    {
        rem=no%10;
        no=no/10;
        rev=rev*10+rem;
    }
    printf("%d",rev);
    return 0;
}