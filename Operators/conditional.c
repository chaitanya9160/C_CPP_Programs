#include<stdio.h>
#include<conio.h>
int main()
{
    int no,rem;
    printf("Enter number");
    scanf("%d",&no);
    rem=no%2;
    rem==0 ? printf("Even"):printf("Odd");
    return 0;
}