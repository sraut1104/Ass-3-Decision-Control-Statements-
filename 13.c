// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if(a%3==0 && a%2==0)
        printf("\n%d is divisible by both 3 and 2",a);
    else
        if(a%3==0)
            printf("\n%d is only divisible by 3",a);
        else
            if(a%2==0)
                printf("\n%d is only divisible by 2",a);
            else
                printf("\n%d is not divisible by both 3 and 2",a);

    return 0;
}