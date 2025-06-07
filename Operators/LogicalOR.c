#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=5,c=4,d;
    d=a>b || b<c;
    printf("d=%d",d);
    d=a<b ||b<c;
    printf("\nd=%d",d);
    getch();
}