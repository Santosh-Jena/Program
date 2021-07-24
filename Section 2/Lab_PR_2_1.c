/*Write a program to compute the area of a triangle given its base and height.*/
#include<stdio.h>
int main()
{
    int base,height;
    float area;
    printf("Enter the base :");
    scanf("%d",&base);
    printf("Enter the height :");
    scanf("%d",&height);
    area=(base*height)/2;
    printf("%f",area);
}
