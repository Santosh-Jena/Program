/*Write a program to take a number as input and check whether it is even or odd using
conditional operator (do not use if statement).*/

#include<stdio.h>
int main()
{
    int no;
    printf("Enter a number :");
    scanf("%d",&no);
    (no%2==0)?printf("The no is even"):printf("The no is odd");
}
