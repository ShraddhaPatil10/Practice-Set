#include<stdio.h>
#include<conio.h>

int main()
{
    int std=0;
    printf("\nWelcome To RAINBOW SCHOOL!!!!\n");
    
    printf("\nIn which class do you want to take admission?\n");
    printf("Select from the list:\n 1)1st standard\n 2)2nd standard\n 3)3rd standard\n 4)4th standard\n");
    scanf("%d",&std);
    
    switch(std)
    {
        case 1:
              printf("\nYou have to pay 8900 Rs.\n");
              break;
            
        case 2:
              printf("\nYou have to pay 12,790 Rs.\n");
              break;
            
        case 3:
              printf("\nYou have to pay 21,000.\n");
              break;
            
        case 4:
              printf("\nYou have to pay 23,450 Rs.\n");
              break;
            
        default:
              printf("\nWrong Input!!!\n");
            
     }
     getch();
     return 0;     
}
       