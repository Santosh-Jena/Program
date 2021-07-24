/*Write a program to swap two numbers.*/
#include<stdio.h>
int main()
{

    int a,b,temp;
    printf("Enter First no :");
    scanf("%d",&a);
    printf("Enter Second no :");
    scanf("%d",&b);
    printf("Before Swapping = %d %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping = %d %d ",a,b);
    return 0;
}
/*Program Ends*/
