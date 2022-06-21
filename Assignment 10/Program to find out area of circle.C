#include<stdio.h>
#include<conio.h>

int main ()
{
    float radius=0,pi=0,area=0;
    
    printf("\nEnter the radius of circle:\n");
    scanf("%f",&radius);
    
    pi=3.14;
    
    area=pi*radius*radius;
    
    printf("\nArea of a circle = %f\n",area);
    
    getch();
    return 0;
}