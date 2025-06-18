#include<stdio.h>

int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            if( ((j<=i || j>=11-i)&& i<=5)|| ((j<=11-i || j>=i)&& i>=5))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}