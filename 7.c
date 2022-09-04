/* 7. Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots
*/
#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("Enter the coefficient of X^2,X and the constant: ");
    scanf("%d%d%d",&a,&b,&c);

    D=b*b-4*a*c;
    
    if(D>0)
        printf("\nRoots are real and distinct");
    else if(D=0)
        printf("\nRoots are real and equal");
    else
        printf("\nRoots are imaginary");

    return 0;
}