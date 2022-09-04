// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if(a%7==0 || a%3==0)
        if(a%7==0)
            if(a%3==0)
                printf("\n%d is divisible by both 7 and 3",a);
            else
                printf("\n%d is only divisible by 7",a);
        else
            printf("\n%d is only divisible by 3",a);
    else
        printf("\n%d is neither divisible by 7 nor 3",a);

    return 0;
}