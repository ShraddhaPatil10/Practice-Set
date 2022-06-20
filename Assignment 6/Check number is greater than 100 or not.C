#include<stdio.h>
#include<conio.h>

int main ()
{
    int Num=0;
    
    printf("Enter one Number:\n");
    scanf("%d",&Num);
    
    if(Num>100)
    {
       printf("\nThe %d is greater than 100\n",Num);
    }
    else
    {
       printf("\nThe %d is smaller than 100\n",Num);
    }
    
    getch();
    return 0;
}