#include<stdio.h>
#include<conio.h>

int main ()
{
   int Num=0,i=0;
  
   printf("\nEnter the number:\n");
   scanf("%d",&Num);

   printf("\nMultiplication Table=>\n");
   if(Num<0)
   {
       Num=-(Num);
       for(i=1;i<=10;i++)
      {
         printf(" %d ",Num*i);
       }
    }
    else
    {
      for(i=1;i<=10;i++)
      {
         printf(" %d ",Num*i);
      }
    }
    
   getch();
   return 0;
}