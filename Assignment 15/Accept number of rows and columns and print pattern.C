#include<stdio.h>
#include<conio.h>

int main ()
{
    int i=0,j=0,R=0,C=0,Num=0;

    printf("\nEnter number of rows:\n");
    scanf("%d",&R);

    printf("\nEnter number of columns:\n");
    scanf("%d",&C);

    printf("\nPattern is=>\n");
    for(i=1; i<=R; i++)
    {
        for(Num=5,j=1; j<=C; j++,Num--)
        {
            printf(" %d ",Num);
        }
        printf("\n");
    }

    getch();
    return 0;
}