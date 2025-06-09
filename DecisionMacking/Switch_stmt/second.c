#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter character");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
    {
        ch=ch+32;
    }
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
         printf("\nVowel");
         break;

         default:
          printf("Consonent");
    }
    getch();
}