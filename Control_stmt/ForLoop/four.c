#include<stdio.h>
#include<conio.h>
int main()
{
    for (int row=1;row<=5;row++)
    {
        for(int col=1;col>=5;col++)
        {
            if(row>=col)
            {
                printf("%c",(col+64));   //col=1 ...col+64=65=A
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
