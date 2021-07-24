/*Write a program to input a character and check whether it is in upper case or lower case
using conditional operator. [Hint: compare against the ASCII range.] */
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);
    (ch>=97 && ch<=122) ? printf("%c is Lowercase",ch) : (ch>=65 && ch<=90) ? printf("%c is Uppercase",ch) : printf("%c is not alphabet",ch);
}

