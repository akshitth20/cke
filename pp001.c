/*pp001: Write a program to input a number and check it to be even or odd using if statement.*/
#include<stdio.h>
main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is an even no",n);
    else printf("%d is an odd mumber",n);

}
/*
output
enter a number7
7 is an odd mumber
enter a number12
12 is an even no
*/

