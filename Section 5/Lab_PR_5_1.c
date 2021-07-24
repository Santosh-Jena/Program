/*Write programs to print the following structure:
      *
    * * *
  * * * * *
* * * * * * *

*/
#include <stdio.h>
int main()
{
  int row, i, j;

  printf("Enter the number of rows in pyramid of stars to print\n");
  scanf("%d", &row);

  for (i = 1; i <= row; i++)  // Loop to print rows
  {
    for (j = 1; j <= row-i; j++)  // Loop to print spaces in a row
      printf(" ");

    for (j = 1; j <= 2*i - 1; j++) // Loop to print stars in a row
      printf("*");

    printf("\n");
  }

  return 0;
}
