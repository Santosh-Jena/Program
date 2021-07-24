/*Write a program to read the price of an item in decimal form (like 15.95) and print the
output in paise (like 1595 paise)*/
#include<stdio.h>
int main()
{
    float a;
    int res;
    printf("Enter the price of an item :");
    scanf("%f",&a);
    res=a*100;
    printf("%d paise",res);

}
