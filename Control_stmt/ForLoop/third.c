#include<stdio.h>
#include<conio.h>
int main()
{
    for (int row=1;row<=5;row++)
    {
        for(int col=1;col<=5;col++)
        {
            if(row<=col)
            {
            printf("*");
            }else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}
