#include<stdio.h>
#include<conio.h>

int main ()
{
    int i=0, Num=0,Non_factor=0, factor=0, Diff=0;
    
    printf("Enter a number:\n");
    scanf("%d",&Num);
    
    if(Num>0)
    {
       for(i=1;i<Num;i++)
       {
           if(Num%i!=0)
           {
              Non_factor=Non_factor+i;
           }  
           if(Num%i==0)
           {
              factor=factor+i;
           } 
      }
    
      Diff=factor-Non_factor;
    
      printf("The difference between summation of its factors and non factors are:%d\n",Diff);
 
    }
    else
    {
         printf("\nEnter a positive integer number\n");
     
    } 
    
    getch();
    return 0;
}