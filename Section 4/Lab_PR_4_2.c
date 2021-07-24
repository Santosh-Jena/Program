/*: Write a program to input a number and print “ODD” if the number is odd and “EVEN” if
the number is even.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer number :");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
}
