/*Rewrite the program mentioned in Experiment 2.2. However, rename the data types
‘double’ to ‘Decimal’ and ‘int’ to ‘integer’ by using typedef statement. */
#include<stdio.h>
#include<math.h>
typedef double Decimal;
typedef int Integer;
int main()
{
    Decimal p,r,si,ci;
    Integer t;
	printf("Enter Principle=");
	scanf("%lf",&p);
	printf("Enter Rate=");
	scanf("%lf",&r);
	printf("Enter Time=");
	scanf("%d",&t);

	si=(p*r*t)/100;
	printf("Simple Interest=%lf",si);

	ci= pow((1 + r/100), t)*p-p;
	printf("\nCompound Interest=%lf",ci);
}

