#include<stdio.h>


void main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    if(ch >= 48 && ch <= 57)
    {
        printf("Value is digit");
    }
    else if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("Character is alphabet");
    }
    else
    {
        printf("Character is special symbol");
    }

    
}
