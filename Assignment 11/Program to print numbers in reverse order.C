#include<stdio.h>
#include<conio.h>

int main ()
{
    int num=0,S_num=0,E_num=0,sum=0;
    
    printf("\n\"Note:Enter only positive numbers\"\n");
    printf("\nEnter the range of number:\n");
    
    printf("\nEnter the starting number:");
    scanf("%d",&S_num);
    
    printf("\nEnter the ending number:");
    scanf("%d",&E_num);
    
   
    if(S_num<=E_num)
    {
          printf("\nThe numbers in reverse order are=>\n");
          for(num=E_num;num>=S_num;num--)
          {
                printf(" %d ",num);
           }
     }
     else
     {
         printf("\nInvalid range.\n");
     }
    
    getch();
    return 0;
}