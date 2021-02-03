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
