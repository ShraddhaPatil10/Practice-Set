#include<stdio.h>
#include<conio.h>

int main()
{
    int num=0,i=0;

    printf("\nEnter the number:\n");
    scanf("%d",&num);

    for(i=num; i>0; i--)
    {
        printf(" %d ",num);
        printf(" # ");
        num--;
    }
    printf("\n");
    getch();
    return 0;
}