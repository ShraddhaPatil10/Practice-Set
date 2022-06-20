#include<stdio.h>
#include<conio.h>

int main ()
{
    int Num1=0, Num2=0,Num3=0,Mul=0;
    
    printf("Enter 1st Number:\n");
    scanf("%d",&Num1);
    
    printf("Enter 2nd number:\n");
    scanf("%d",&Num2);
    
    printf("Enter 3rd number:\n");
    scanf("%d",&Num3);
    
    Mul=Num1*Num2*Num3;
    
    printf("\nThe multiplication is => %d\n",Mul);
    
    getch();
    return 0;
   
}