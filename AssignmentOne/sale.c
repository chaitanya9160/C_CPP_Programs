#include<stdio.h>
#include<conio.h>
void main()
{
    int sale,purchase,tot;
    printf("Enter sale price");
    scanf("%d",&sale);
    printf("Enter purchase price");
    scanf("%d",&purchase);
    tot=sale+purchase;
    printf("Totat bill= %d\n",tot);
    (sale>purchase) ? printf("Saller made profit of %d",sale-purchase ,"rs") :printf("Saller made loss of %d",purchase-sale,"rs");
    getch();
}