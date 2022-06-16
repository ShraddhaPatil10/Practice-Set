#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0;
    
    printf("The numbers from 5 to 1 are as:\n\n");
    
    for(i=5;i>=1;i--)
    {
       printf("%d\n",i);
    }
    
    getch();
    return 0;
}