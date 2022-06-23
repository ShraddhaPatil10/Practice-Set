#include<stdio.h>
#include<conio.h>

int main ()
{
    int f_num=0,s_num,i=0;

    printf("\nEnter the first number:\n");
    scanf("%d",&f_num);

    printf("\nEnyer the second number:\n");
    scanf("%d",&s_num);

    for(i=1; i<=s_num; i++)
    {
        printf(" %d ",f_num);
    }

    getch();
    return 0;

}