#include<stdio.h>
#include<conio.h>

int main ()
{
    int i=0, Num=0,factor=0;
    
    printf("Enter a number:\n");
    scanf("%d",&Num);
    
    if(Num>0)
    {
       printf("The factors of %d in descending order:\n",Num);

       for(factor=1,i=Num-1;i>0;i--)
       {
           if(Num%i==0)
           {
              factor=i;
              printf("%d\n", factor);
           }   
      }
    
    }
    else
    {
         printf("\nEnter a positive integer number\n");
     
    } 
    
    getch();
    return 0;
}