#include<stdio.h>
#include<conio.h>

int main ()
{
   int Num=0;
  
   printf("\nEnter one number:\n");
   scanf("%d",&Num);

   if(Num<50)
   {
       printf("\nSmall");
   }
   else if(Num>=50 && Num<100)
   {
       printf("\nMedium");
   }
   else if(Num>=100)
   {
       printf("\nLarge");
   }

   getch();
   return 0;
}