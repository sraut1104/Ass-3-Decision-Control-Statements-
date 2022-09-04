// 5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter an number: ");
    scanf("%d",&a);

    if(99<a && a<999)
        printf("\nThree-digit number");
    else
        printf("\nNot a three digit number");
    
    return 0;
}