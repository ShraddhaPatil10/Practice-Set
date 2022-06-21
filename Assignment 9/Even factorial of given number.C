#include<stdio.h>
#include<conio.h>

int main ()
{
    int num=0,Temp=0,even_fact=0;
    
    printf("\nEnter the number:\n");
    scanf("%d",&num);
    
    if(num<0)
    {  
       for(even_fact=1,Temp=-num;Temp>0;Temp--)
       {
           if(Temp%2==0)
           {
               even_fact=even_fact*Temp;
           }
       }
    }
    else
    {
        for(even_fact=1,Temp=num;Temp>0;Temp--)
       {
           if(Temp%2==0)
           {
               even_fact=even_fact*Temp;
           }
       }
    }
    
    printf("\nThe factorial of %d = %d\n",num,even_fact);
    
    getch();
    return 0;
}