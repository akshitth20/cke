#include<stdio.h>
void main()
{
    int n,i,f1,f2,rem;
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
