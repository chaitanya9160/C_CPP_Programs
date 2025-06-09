#include<stdio.h>
#include<conio.h>
void main()
{
    int s1,s2,s3,s4,s5,s6,total;
    float per;
    printf("Enter Subject marks");
    scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
    
    total=s1+s2+s3+s4+s5+s6;
    per=(total*100)/600;
    printf("percentage =%f\n",per);

    if(per>70 && per<100) 
    {
        printf("Distinction");
    } 
    else if(per>60 && per<70)
    {
        printf("First division");
    }
    else if(per>50 && per<60)
    {
        printf("Second division");
    }
    else if(per>40 && per<50)
    {
        printf("Third division");
    }
    else if(per<40)
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid percentage");
    }
   
    getch();
}