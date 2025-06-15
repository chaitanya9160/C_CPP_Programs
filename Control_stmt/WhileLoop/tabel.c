#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,no,tabel;
    printf("Enter no :\n");
    scanf("%d",&no);
    while(i<=10)
    {
        tabel=no*i;
        i++;
        printf("%d\n",tabel);
    }
   
    getch();
}