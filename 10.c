/* 10. Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage.
*/

#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter the cost price a product: ");
    scanf("%d",&cp);
    printf("\nEnter selling price of a product: ");
    scanf("%d",&sp);

    if(cp>sp)  
        printf("\nLoss percentage = %f%%",((cp-sp)*100.0)/cp);
    else
        printf("\nProfit percentage = %f%%",((sp-cp)*100.0)/cp);
    return 0;
}