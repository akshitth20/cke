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
