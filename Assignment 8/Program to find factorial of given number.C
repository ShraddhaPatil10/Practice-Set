#include<stdio.h>
#include<conio.h>

int main ()
{
   int Num=0,fact=0,Temp=0;
  
   printf("\nEnter the number:\n");
   scanf("%d",&Num);

   for(Temp=Num,fact=1;Temp>0;Temp--)
   {
       fact=fact*Temp;
    }
    printf("\nFactorial of %d is = %d\n",Num,fact);
    
    getch();
    return 0;
    
}