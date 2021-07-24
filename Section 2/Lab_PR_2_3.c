/* Write a program that requests two float type numbers from the user and then divides the
1st number by the 2nd and displays the result along with the numbers */
#include<stdio.h>
int main()
{
    float a,b,res;
    printf("Enter two floating point number :");
    scanf("%f %f",&a,&b);
    printf("%f %f\n",a,b);
    res=a/b;
    printf("%f",res);

}
