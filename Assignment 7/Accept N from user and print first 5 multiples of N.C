#include<stdio.h>
#include<conio.h>

int main ()
{
   int N=0,i=0;
   
   printf("Enter the number:\n");
   scanf("%d",&N);

   printf("\nThe 5 multiples of %d are:\n",N);
   for(i=1;i<=5;i++)
   {
     printf(" %d ",N*i);
   }

   getch();
   return 0;
}
