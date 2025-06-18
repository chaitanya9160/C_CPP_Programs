#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++);   //; =end of stmt
    {
        printf("Good Morning\n");    //not a part of loop For loop end before opening {}
    }
    return 0;
}