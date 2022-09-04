// 15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if(a>0)
        printf("Positive");
    else
        if(a<0)
            printf("Negative");
        else
            printf("Zero");



    return 0;
}