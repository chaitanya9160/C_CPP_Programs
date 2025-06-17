#include<stdio.h>
#include<conio.h>
int main()
{
    int qnt,rate,total;
    char ch;
    do
    {
        printf("Enter of Quantity and Rate ");
        scanf("%d%d",&qnt,&rate);
        total=qnt*rate;
        printf("\n Total bill =%d\n",total);
        printf("do you repete %c\n",&ch);
        ch=getch(); //hold character
       
    }
   while (ch=='Y'|| ch=='y');
    
    return 0;
}