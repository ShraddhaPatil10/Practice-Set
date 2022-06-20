#include<stdio.h>
#include<conio.h>

int main ()
{
    int Num1=0, Num2=0;
    
    printf("Enter 1st Number:\n");
    scanf("%d",&Num1);
    
    printf("Enter 2nd number:\n");
    scanf("%d",&Num2);
    
    if(Num1==Num2)
    {
       printf("\nThe given two numbers are equal\n");
    }
    else
    {
       printf("\nThe given two numbers are not equal\n");
    }
    
    getch();
    return 0;
}