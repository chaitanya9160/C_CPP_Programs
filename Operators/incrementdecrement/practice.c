    #include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b;
    b=++a;
    printf("a=%d b=%d",a,b);
    b=a++;
    printf("\na=%d b=%d",a,b);
     b=--a;
    printf("\na=%d b=%d",a,b);
     b=a--;
    printf("\na=%d b=%d",a,b);
   getch();
}