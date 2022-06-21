#include<stdio.h>
#include<conio.h>

int main ()
{
    int num=0,Temp=0,odd_fact=0;
    
    printf("\nEnter the number:\n");
    scanf("%d",&num);
    
    if(num<0)
    {  
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
        for(odd_fact=1,Temp=num;Temp>0;Temp--)
       {
           if(Temp%2==1)
           {
               odd_fact=odd_fact*Temp;
           }
       }
    }
    
    printf("\nThe factorial of %d = %d\n",num,odd_fact);
    
    getch();
    return 0;
}