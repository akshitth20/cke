//Define a Function-like macro 'max' with takes three operands and returns the maximum of given operands
#include<stdio.h>
#define max(x,y,z)\
 ( (x>y && x>z)? x:(y>z)? y:z)
int main()
{
    int a,b,c;
    printf("Enter 3 integer numbers\n");
    scanf("%d%d%d",&a ,&b ,&c);
    printf("Biggest of 3 numbers is %d\n",max(a,b,c));
    return 0;

}
