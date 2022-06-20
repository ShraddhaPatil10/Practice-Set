#include<stdio.h>
#include<conio.h>

int main ()
{
    char Name[20]={};
    
    printf("Enter your name:\n");
    gets(Name);
    
    printf("\nYour name is => %s\n",Name);
    
    getch();
    return 0;
}
    