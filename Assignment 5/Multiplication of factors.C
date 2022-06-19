#include<stdio.h>
#include<conio.h>

int main ()
{
    int i=0, Num=0,factor=0;
    
    printf("Enter a number:\n");
    scanf("%d",&Num);
    
    if(Num>0)
    {
       for(factor=1,i=1;i<Num;i++)
       {
           if(Num%i==0)
           {
              factor=factor*i;
           }   
      }
      printf("The multiplication of factors=%d\n", factor);
    
    }
    else
    {
         printf("\nEnter a positive integer number\n");
     
    }
   
    
    getch();
    return 0;
}