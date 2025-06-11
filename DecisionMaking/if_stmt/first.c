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
    if(a%2==1)
    {
        printf("Odd");
    }
   
    getch();
}