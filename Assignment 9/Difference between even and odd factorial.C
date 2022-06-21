#include<stdio.h>
#include<conio.h>

int main ()
{
    int num=0,Temp=0,even_fact=0,odd_fact=0,Diff=0;
    
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
    
       for(odd_fact=1,Temp=-num;Temp>0;Temp--)
       {
           if(Temp%2==1)
           {
               odd_fact=odd_fact*Temp;
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
        
        for(odd_fact=1,Temp=num;Temp>0;Temp--)
        {
           if(Temp%2==1)
           {
               odd_fact=odd_fact*Temp;
           }
        }
    }
    
    Diff=even_fact-odd_fact;
    
    printf("\nThe difference between even and odd factorial is = %d\n",Diff);  
    getch();
    return 0;
}