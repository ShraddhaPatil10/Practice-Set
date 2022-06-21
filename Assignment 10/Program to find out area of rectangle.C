#include<stdio.h>
#include<conio.h>

int main ()
{
    float width=0, height=0,Area=0;
    
    printf("\nEnter the width of rectangle:\n");
    scanf("%f",&width);
    
    printf("\nEnter the height of rectangle:\n");
    scanf("%f",&height);
    
    Area=width*height;
    
    printf("\nArea of rectangle is => %f\n",Area);
    
    getch();
    return 0;
    
}