/*
1.7. Write a program to input a character and its ASCII value
*/
#include<stdio.h>
void main()
{
    int val;
    char c;
    printf("enter the character");scanf("%c",&c);
    printf("enter ASCII value"); scanf("%d",&val);
    printf("ASCII value=%d\ncharacter=%c",val,c);
}
/*output
enter the character24
enter ASCII valueASCII value=4
character=2
*/
