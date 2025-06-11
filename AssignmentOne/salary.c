#include<stdio.h>
#include<conio.h>
void main()
{
    int bs,da,hra;
    float tot_sal;
    printf("Enetr your basic salary");
    scanf("%d",&bs);
    da=(bs*30)/100;
    hra=(bs*30)/100;
    tot_sal=bs+da+hra;
    printf("Total Salary= %f",tot_sal);
    getch();
}