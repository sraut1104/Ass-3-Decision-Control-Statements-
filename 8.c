// 8. Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
int main()
{
    int y;
    printf("Enyter a year: ");
    scanf("%d",&y);

    if(y%100)
        if(y%4)
            printf("\nNot Leap Year");
        else
            printf("\nLeap year");
        
    else
        if(y%400)
            printf("\nNot Leap Year");
        else
            printf("\nLeap Year");


    return 0;
}