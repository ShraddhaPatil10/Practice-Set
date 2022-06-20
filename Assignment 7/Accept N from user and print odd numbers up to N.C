#include<stdio.h>
#include<conio.h>

int main ()
{
   int N=0,i=0;
   
   printf("Enter the number:\n");
   scanf("%d",&N);

   printf("\nThe odd numbers upto %d are:\n",N);
   for(i=1;i<N;i++)
   {
      if(i%2==1)
      { 
         printf(" %d ",i);
      }
   }
 
   getch();
   return 0;
}
