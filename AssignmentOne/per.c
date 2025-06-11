#include<stdio.h>
#include<conio.h>
void main()
{  
    int s1,s2,s3,s4,s5,tot,per;
    printf("Enter 5 subject marks");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    tot=s1+s2+s3+s4+s5;
    per=(tot*100)/500;
    printf("Percentage =%d",per);
    (per>35)? printf("\nStudent is pass") : printf("\nStudent is fail");
    getch();
}

