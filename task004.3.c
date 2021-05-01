//Define a multiline macro 'factorial' which takes a number as operand and prints the factorial of the given number
#define factorial() int n,i=1,fac=1;\
scanf("%d",&n);\
while(i<=n)\
{fac=fac*i;\
i++;\
}\
printf("The factorial of %d is %d",n,fac);
main()
{
    factorial()
}
