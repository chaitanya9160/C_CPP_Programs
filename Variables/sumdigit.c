#include<stdio.h>
#include<conio.h>
int main()
{
    int no,rem,sum=0;
    printf("Enter number");
    scanf("%d",&no);

    rem=no%10;
    no=no/10;
    sum=sum+rem;

    rem=no%10;
    no=no/10;
    sum=sum+rem;

    rem=no%10;
    no=no/10;
    sum=sum+rem;
    
    printf("sum is %d",sum);
    return 0;
}
