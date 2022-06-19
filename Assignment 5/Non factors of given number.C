#include<stdio.h>
#include<conio.h>

int main ()
{
    int i=0, Num=0,Non_factor=0;
    
    printf("Enter a number:\n");
    scanf("%d",&Num);
    
    if(Num>0)
    {
       printf("The non factors of given %d number:\n",Num);

       for(Non_factor=1,i=1;i<Num;i++)
       {
           if(Num%i!=0)
           {
              Non_factor=i;
              printf("%d\n", Non_factor);
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