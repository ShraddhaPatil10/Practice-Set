#include<stdio.h>
#include<conio.h>

int main ()
{
   int Num=0,i=0;
  
   printf("\nEnter the number:\n");
   scanf("%d",&Num);

   printf("\nMultiplication Table in reverse=>\n");

   if(Num<0)
   {
       Num=-(Num);
       for(i=10;i>=1;i--)
      {
         printf(" %d ",Num*i);
      }
   }
   else
  {
     for(i=10;i>=1;i--)
     {
         printf(" %d ",Num*i);
     }
   }
    
   getch();
   return 0;
}