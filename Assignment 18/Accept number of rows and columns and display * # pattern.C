#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,X=0;


    printf("\nEnter number of rows and columns:\n");
    scanf("%d",&X);

    printf("\nPattern is=>\n");
    for(i=1; i<=X; i++)
    {
        for(j=1; j<=X; j++)
        {
            if(j==1 || i==X || i>=j)
            {
                printf(" * ");
            }
            else
            {
                printf(" # ");
            }
        }
        printf("\n");

    }

    getch();
    return 0;

}