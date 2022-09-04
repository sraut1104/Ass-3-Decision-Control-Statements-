/* 11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed.
*/

#include<stdio.h>
int main()
{
    int beng,eng,math,phy,che;
    printf("Enter the marks of Bengali: ");
    scanf("%d",&beng);
    if(beng<0 || beng>100)
    {
        printf("Enter corect value");
        return 0;
    }
    printf("\nEnter the marks of English: ");
    scanf("%d",&eng);
    if(eng<0 ||eng>100)
    {
        printf("Enter corect value");
        return 0;
    }
    printf("\nEnter the marks of Mathematics: ");
    scanf("%d",&math);
    if(math<0 ||math>100)
    {
        printf("Enter corect value");
        return 0;
    }
    printf("\nEnter the marks of Physics: ");
    scanf("%d",&phy);
    if(phy<0 ||phy>100)
    {
        printf("Enter corect value");
        return 0;
    }
    printf("\nEnter the marks of Chemistry: ");
    scanf("%d",&che);
    if(che<0 || che>100)
    {
        printf("Enter corect value");
        return 0;
    }

    if(beng>=33 && beng<=100)
        if(eng>=33 && eng<=100)
            if(math>=33 && math<=100)
                if(phy>=33 && phy<=100)
                    if(che>=33 && che<=100)
                        printf("Pass");
                    else
                        printf("fail");
                else
                    printf("fail");
            else
                printf("fail");
        else
            printf("fail");
    else
        printf("fail");
        

    return 0;
}