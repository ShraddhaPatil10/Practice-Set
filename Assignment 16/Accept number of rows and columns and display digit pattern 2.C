#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,R=0,C=0,num=0;


    printf("\nEnter number of rows:\n");
    scanf("%d",&R);

    printf("\nEnter number of columns:\n");
    scanf("%d",&C);

    num=1;
    for(i=1; i<=R; i++)
    {
        for(j=1; j<=C; j++)
        {
            printf(" %d ",num);
            num++;
        }
        printf("\n");
    }

}