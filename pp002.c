/*pp002: Write a program to input a number and check it to be even or odd using switch statement.*/
#include<stdio.h>
void main()
{
    int x,n;
    printf("enter a number");
    scanf("%d",&n);
    x=n%2;
    switch(x){
    case 0: printf("No is even");break;
    default :printf("No is odd");
    }
}
/*output
enter a number7
No is odd
enter a number10
No is even
*/
