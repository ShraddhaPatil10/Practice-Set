#include<stdio.h>
#include<conio.h>

int main()
{
    int num=0,i=0;

    printf("\nEnter the number:\n\n");
    scanf("%d",&num);

    printf("\nPattern is=>\n");
    for(i=1; i<=num; i++)
    {
        printf(" # ");
        printf(" %d * ",i);
    }

    getch();
    return 0;
}