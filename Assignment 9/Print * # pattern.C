#include<stdio.h>
#include<conio.h>

int main ()
{
    int Num=0,i=0;
    
    printf("\nEnter the number:\n");
    scanf("%d",&Num);
    
    for(i=1;i<=Num;i++)
    {
        printf(" * ");
    }
    for(i=1;i<=Num;i++)
    {
        printf(" # ");
    }
    
    getch();
    return 0;
}
