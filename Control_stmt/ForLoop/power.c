#include<stdio.h>
int main()
{
    int index,base,power=1;
    printf("Enter value of base & index");
    scanf("%d%d",&base,&index);
    for(int i=1;i<=index;i++)
    {
        power=power*base;
    }
    printf("%d",power);
    return 0;
}