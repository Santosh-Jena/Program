/*Write a function using pointers that compares two integer arrays to see whether they
are identical. The function returns 1 if they are identical, 0 otherwise.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void compare(int *a1, int *a2, int n)
{
	int i, flag = 0;
	for(i = 0; i < n; i++)
	{
		if(*a1 != *a2)
		{
			flag = 1;
			break;
		}
		a1++;
		a2++;
	}
	if(flag == 1)
		printf("\nBoth arrays are not equal");
	else
		printf("\nBoth arrays are equal");
}

int main(int argc, char **argv)
{
	int a1[10], a2[10];
	int n, i;
	printf("Enter a number between 1 and 10: ");
	scanf("%d", &n);
	printf("Enter %d numbers for array 1: ", n);
	for(i = 0; i < n; i++)
		scanf("%d", &a1[i]);
	printf("Enter %d numbers for array 2: ", n);
	for(i = 0; i < n; i++)
		scanf("%d", &a2[i]);
	compare(a1, a2, n);
    getch();
    return 0;
}
