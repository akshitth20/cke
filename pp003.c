/*pp003: Write a program to input a number and check it to be even or odd using bitwise operator.*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if((n&1)==0)
printf("No is even");else printf("No is odd");
}
/*output
enter a number5
No is odd
enter a number16
No is even
*/
