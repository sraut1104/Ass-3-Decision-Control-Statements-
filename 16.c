/* 16. Write a program to check whether a given character is an alphabet (uppercase),an 
alphabet (lower case), a digit or a special character.
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
        printf("\nA uppercase");
    else
        if(ch>=97 && ch<=122)
            printf("\nA lowercase");
        else
            if(ch>=48 && ch<=57)
                printf("\nA digit");
            else
                printf("\nA special character");
            

    return 0;
}