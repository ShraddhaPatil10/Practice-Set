#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0,i=0;
    
    printf("Enter One Number:\n");
    scanf("%d",&Num);
    
    printf("\n");
    for(i=1;i<=Num;i++)
    {
        printf("*");
    }
    printf("\n");
    getch();
    return 0;
}