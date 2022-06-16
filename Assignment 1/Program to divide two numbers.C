#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1=0,Num2=0,Div=0;
    
    printf("Enter two numbers:\n");
    scanf("%d%d",&Num1,&Num2);
    
    Div=Num1/Num2;
    
    printf("\nThe Division is => %d/%d = %d\n",Num1,Num2,Div);
    
    getch();
    return 0;
    
}