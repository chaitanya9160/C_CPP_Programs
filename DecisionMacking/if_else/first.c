#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter any no.");
    scanf("%d",&a);
    if(a%2==0) 
    {
        printf("Even");
    } 
   else
    {
        printf("Odd");
    }
   
    getch();
}