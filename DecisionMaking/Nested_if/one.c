#include<stdio.h>
int main()
{
    int id,sal;
    printf("Enter id ");
    scanf("%d",&id);
    printf("Enter salary ");
    scanf("%d",&sal);
    if(id>=1 && id<=100)
    { 
         if(sal>=10000)
         {
            printf("permanent");
         }
         else
         {
            printf("temporary ");
         }
    }
    else
     {
         printf("candidate is not employee");
     }

    
    return 0;
}