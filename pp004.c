/*pp004: Write a program to input a number and check it to be even or odd without using any arithmetic, relational, logical or bitwise operator.*/
#include<stdio.h>
struct Test{
unsigned n:1;
};
main(){
int num;
struct Test t;
system("cls"); printf("Enter a number:");scanf("%d",&num);
t.n=num;
if(t.n)
    printf("odd");
    else printf("even");
    getch();
}
/*output
enter a number3
No is odd
enter a number12
No is even
/*
