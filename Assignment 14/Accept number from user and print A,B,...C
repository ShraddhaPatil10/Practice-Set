#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='A';
    int num=0,i=0;

    printf("Enter the number:\n");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        printf(" %c ",ch);
        ch++;
    }

    getch();
    return 0;
}