#include<stdio.h>
#include<conio.h>

int main ()
{
    int Total_marks=0, Obtain_marks=0;
    float Per=0;
    
    printf("Enter the total marks:\n");
    scanf("%d",&Total_marks);
    
    printf("Enter obtained marks:\n");
    scanf("%d",&Obtain_marks);
    
    Per=(Obtain_marks*100)/Total_marks;
    
    printf("Your Percentage is => %f\n",Per);
    
    getch();
    return 0;
}