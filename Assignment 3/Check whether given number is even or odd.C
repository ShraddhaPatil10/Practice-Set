#include<stdio.h>
#include<conio.h>

int main ()
{
    int Num=0;

    printf("\nEnter the number:\n");
    scanf("%d",&Num);

    (Num%2==0)?printf("\nEven"):printf("\nOdd");

    getch();
    return 0;
}