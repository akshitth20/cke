//using bitwise AND. check for even and odd no
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if((n&1)==0)
printf("No is even");else printf("No is odd");
}
