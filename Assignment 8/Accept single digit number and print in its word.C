#include<stdio.h>
#include<conio.h>

int main ()
{
   int Num=0;
  
   printf("\nEnter one single digit number:\n");
   scanf("%d",&Num);

   if(Num==0)
   {
      printf("\nZero");
   }
   else if(Num==1 || Num==-1)
   {
      printf("\nOne");
   }
   else if(Num==2 || Num==-2)
   {
      printf("\nTwo");
   }
   else if(Num==3 || Num==-3)
   {
      printf("\nThree");
   }
   else if(Num==4 || Num==-4)
   {
      printf("\nFour");
   }
   else if(Num==5 || Num==-5)
   {
      printf("\nFive");
   }
   else if(Num==6 || Num==-6)
   {
      printf("\nSix");
   }
   else if(Num==7 || Num==-7)
   {
      printf("\nSeven");
   }
   else if(Num==8 || Num==-8)
   {
      printf("\nEight");
   }
   else if(Num==9 || Num==-9)
   {
       printf("\nNine");
   }
   else
   {
      printf("\nInvalid Number");
   }
   getch();
   return 0;
}