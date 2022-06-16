#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';
    
    printf("Enter a character:\n");
    scanf("%c",&ch);
    
    if(ch>='a' && ch<='z')
    {
       ch=ch-32;
    }
    else if(ch>='A' && ch<='Z')
    {
       ch=ch+32;
    }
    
    printf("\nAfter conversion of case of character = %c\n",ch);
    
    getch();
    return 0;
}