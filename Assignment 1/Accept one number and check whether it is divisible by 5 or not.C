#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0;
    
    printf("Enter One Number:\n");
    scanf("%d",&Num);
    
    if(Num%5==0)
    {
       printf("The given number %d is divisible by 5\n",Num);
    }
    else
    {
       printf("The given number %d is not divisible by 5\n",Num);
    }
    
    getch();
    return 0;
}