#include<stdio.h>
#include<conio.h>

int main ()
{
    int Num=0,i=0;
    
    printf("Enter one number:\n");
    scanf("%d",&Num);
    
    printf("\nPattern is=>\n");
    
    for(i=1;i<=Num;i++)
    {
       printf(" %d ",i);
    }
    printf("\n\n");
    
    getch();
    return 0;
}