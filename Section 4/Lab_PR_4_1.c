/*: Write a program to input three numbers and find out the smallest */
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three integer numbers :");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("%d is small");
    }
    else
    if(b<a && b<c)
    {
        printf("%d is small");
    }
    else
    if(c<a && c<b)
    {
        printf("%d is small");
    }
}
