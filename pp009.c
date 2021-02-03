/*pp009: Write a program having a function iseven() which takes a number as input and returns 1 if the number is even else returns 0.
Create the main() function to input a number and check it to be even or odd using iseven() function.*/

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
/*output
enter a number4
no is even
enter a number10
no is even*/
