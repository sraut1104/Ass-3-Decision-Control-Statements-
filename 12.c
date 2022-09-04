// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char alph;
    printf("Enter an alphabet: ");
    scanf("%c",&alph);

    if(alph>=65 && alph<=90)
        printf("\nUppercase");
    else
        if(alph>=97 && alph<=122)
            printf("\nLowercase");
        else
            printf("\nWarning!\nEnter an alphabet");


    return 0;
}