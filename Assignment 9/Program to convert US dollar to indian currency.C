#include<stdio.h>
#include<conio.h>

int main ()
{
    int US_dollar=0, Indian_curr=0;
    
    printf("\nEnter the amount in US dollar:\n");
    scanf("%d",&US_dollar);
    
    Indian_curr=US_dollar*70;
    
    printf("\nAmount in Indian currency=>%d\n", Indian_curr);
    
    getch();
    return 0;
    
}
