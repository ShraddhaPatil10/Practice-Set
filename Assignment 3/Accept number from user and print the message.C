#include<stdio.h>
#include<conio.h>

int main ()
{
    int num=0,i=0;
    
    printf("\nEnter the number:\n");
    scanf("%d",&num);
    
    if(num<10)
    {
       printf("\nHello!!!");
    }
    else
    {
       printf("\nDemo");
    }
    
    getch();
    return 0;
}