/* Write a program to count the number of digits in a number */

#include<stdio.h>
int main()
{
    int n,c;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    printf("%d",c);
}
