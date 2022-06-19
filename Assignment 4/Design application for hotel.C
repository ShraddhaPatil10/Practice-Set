#include<stdio.h>
#include<conio.h>

int main ()
{
    int Bill_amount=0,After_dis=0,Dis=0,Cal=0;
    
    printf("*****ALANKAR HOTEL KARAD*****\n");
    
    printf("\nEnter total amount of bill:");
    scanf("%d",&Bill_amount);
    
   
    
    if(Bill_amount<500)
    {
        printf("\nSorry,There is no discount..\n");
        After_dis=Bill_amount;
    }
    else if(Bill_amount>500 && Bill_amount<1500)
    {
        Dis=10;
        Cal=(Bill_amount*Dis)/100;
        After_dis=Bill_amount-Cal;
    }
    else if(Bill_amount>1500)
    {
        Dis=15;
        Cal=(Bill_amount*Dis)/100;
        After_dis=Bill_amount-Cal;
    }
    
    printf("\nThe Bill amount after applying discount = %d Rs\n",After_dis);
    
    printf("\n\nThanks For Visiting!!!!\n");
    
    getch();
    return 0;
}