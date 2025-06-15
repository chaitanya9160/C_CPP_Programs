#include<stdio.h>
#include<conio.h>
void main()
{ 
  int no,skey,rem,flag=0;
  printf("\nEnter number from keyboard\n");
  scanf("%d",&no);
  printf("Enter search key\n");
  scanf("%d",&skey);
  while(no!=0)
  {
    rem= no % 10;
    no  = no/10;
    if(rem==skey)
    { flag=1;
       break;
    }

  }
  if(flag)
    {  printf("Search key found\n");
    }
    else
    {   printf("Search key not found\n");
    }

   getch();
}
