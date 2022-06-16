#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';
    
    printf("Enter a character:\n");
    scanf("%c",&ch);
    
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("\nTRUE");
    }
    else
    {
       printf("\nFALSE");
    }
      
    getch();
    return 0;
}