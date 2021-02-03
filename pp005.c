/*pp005: Write a program to input two numbers and print all even numbers in given range.*/
#include<stdio.h>
void main()
{
    int i,f1,f2,rem;
    printf("enter the starting no"); scanf("%d",&f1);
    printf("enter the ending no"); scanf("%d",&f2);
    printf("\n The even no b/w %d and %d are ",f1,f2);
    for(i=f1;i<=f2;++i)

    {
        rem=i%2;
        if(rem==0)
        printf("\n%d",i);

        }
}
/*output
enter the starting no2
enter the ending no20

 The even no b/w 2 and 20 are
2
4
6
8
10
12
14
16
18
20
*/
