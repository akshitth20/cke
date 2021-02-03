/*pp008: Write a program to input few numbers from command line and print all even numbers from given set of numbers.*/
#include<stdio.h>
main(int argc,char*argv[]){
    if(argc==1)
    {
        printf("Synatx is: evenodd<number>");
        exit(1);
    }
    int num=atoi(argv[1]);
    num%2?printf("%d is odd",num):printf("%d is even",num);
}

