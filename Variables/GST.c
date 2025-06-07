#include<stdio.h>
#include<conio.h>
int main()
{
    long int qty,rate,total,gstAmt;
    printf("Enter quantity and rate");
    scanf("%d%d",&qty,&rate);
    total=qty*rate;
    gstAmt=(total*18)/100; 
    total=total+gstAmt;
    printf("Bill with GST Amount %ld",total);
    return 0;
}