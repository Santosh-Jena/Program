/*: Write a program to compute the area of a triangle given its three sides.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,area;
    printf("Enter the value of a, b & c :");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s * (s-a) * (s-b) * (s-c));
    printf("%f",area);
}
