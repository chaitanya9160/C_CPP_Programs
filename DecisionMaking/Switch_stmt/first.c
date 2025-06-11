#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,choice;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Enter choice");
    printf("\n1:Addition");
    printf("\n2:Substraction");
    printf("\n3:Multiplication");
    printf("\n4:Division\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("Addition is= %d",a+b);
        break; 

        case 2:
         printf("Substraction is = %d",a-b);
         break;

        case 3:
          printf("Multiplication is =%d",a*b);
          break;

         case 4:
           printf("Division is =%d",a/b);
           break;
 
        default:
        printf("Wrong choice");
    }

    getch();

}