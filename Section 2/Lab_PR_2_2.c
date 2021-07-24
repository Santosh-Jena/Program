/* Write a program that takes as input, the principal, rate of interest, and time, and then
calculates the simple and compound interest.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float p, r, t, a, si, ci;
	printf("Enter Principle=");
	scanf("%f",&p);
	printf("Enter Rate=");
	scanf("%f",&r);
	printf("Enter Time=");
	scanf("%f",&t);

	si=(p*r*t)/100;

	printf("Simple Interest=%f",si);
	a = p*(pow((1 + r / 100), t));
	ci =  a - p;
	printf("\nCompound Interest=%f",ci);
}
