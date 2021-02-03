#include<stdio.h>
 void iseven();
 void main()
 {
     iseven();
 }
 void iseven()
 {
     int n,i;
     printf("enter a number");
     scanf("%d",&n);
     if(n%2==0)
        printf("no is even");
     else printf("no is odd");
 }
