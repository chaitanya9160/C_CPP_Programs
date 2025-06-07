#include<stdio.h>
#include<conio.h>
int main()
{
    int no;
    printf("Enter number");
    scanf("%d",&no);
    no=no/10;
    printf("after removing last digit  %d",no);
    return 0;
}
