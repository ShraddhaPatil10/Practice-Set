#include<stdio.h>
#include<conio.h>

int main ()
{
    int distance=0;
    
    printf("\nEnter the distance in kilometres:\n");
    scanf("%d",&distance);
    
    distance=distance*1000;
    
    printf("\nThe distance in meters=>%d meter\n", distance);
    
    getch();
    return 0;
}