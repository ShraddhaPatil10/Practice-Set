#include<stdio.h>
#include<conio.h>

int main ()
{
    float Temp=0;
    
    printf("\nEnter the temperature in celcius:\n");
    scanf("%f",&Temp);
    
    Temp=((Temp-32)*5/9);
    
    printf("\nThe temperature in fehrenheit=> %f\n",Temp);
    
    getch();
    return 0;
}