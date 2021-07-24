/* Write a program to swap two numbers without using a third variable.*/
#include<stdio.h>
int main()
{

    int a,b;
    printf("Enter First no :");
    scanf("%d",&a);
    printf("Enter Second no :");
    scanf("%d",&b);
    printf("Before Swapping = %d %d\n",a,b);
    a^=b^=a^=b;
    printf("After Swapping = %d %d ",a,b);
    return 0;
}
/*Program Ends*/
