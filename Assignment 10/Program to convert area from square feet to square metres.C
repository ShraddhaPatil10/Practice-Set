#include<stdio.h>
#include<conio.h>

int main ()
{
    float area=0;
    
    printf("\nEnter the area in square feet:\n");
    scanf("%f",&area);
    
    area=area*0.0929;
    
    printf("\nArea in square metres=> %f\n",area);
    
    getch();
    return 0;
}