#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,R=0,C=0;
    char ch='A';

    printf("\nEnter number of rows:\n");
    scanf("%d",&R);

    printf("\nEnter number of columns:\n");
    scanf("%d",&C);

    for(ch='A',i=1; i<=R; i++,ch++)
    {
        for(j=1; j<=C; j++)
        {
            printf(" %c ",ch);
        }
        printf("\n");
    }

}