/*Write a menu-based program that takes two matrixes A and B as input and displays the
results of the following operations based on user’s choice.
1. A + B
2. A - B
3. B - A
4. A × B
*/
#include<stdio.h>
#include<stdlib.h>

// function to add two 3x3 matrix
void add(int m[3][3], int n[3][3], int sum[3][3])
{
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      sum[i][j] = m[i][j] + n[i][j];
}

// function to subtract two 3x3 matrix
void subtract(int m[3][3], int n[3][3], int result[3][3])
{
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      result[i][j] = m[i][j] - n[i][j];
}
void subtract1(int m[3][3], int n[3][3], int result[3][3])
{
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      result[i][j] =  n[i][j]-m[i][j];
}

// function to multiply two 3x3 matrix
void multiply(int m[3][3], int n[3][3], int result[3][3])
{
  for(int i=0; i < 3; i++)
  {
    for(int j=0; j < 3; j++)
    {
      result[i][j] = 0; // assign 0
      // find product
      for (int k = 0; k < 3; k++)
      result[i][j] += m[i][k] * n[k][j];
    }
  }
}

// function to find transpose of a 3x3 matrix

// function to display 3x3 matrix
void display(int matrix[3][3])
{
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
      printf("%d\t",matrix[i][j]);

    printf("\n"); // new line
  }
}

// main function
int main()
{
  // matrix
  int a[][3] = { {5,6,7}, {8,9,10}, {3,1,2} };
  int b[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
  int c[3][3];

  // print both matrix
  printf("Matrix A:\n");
  display(a);
  printf("Matrix B:\n");
  display(b);

  // variable to take choice
  int choice;

  // menu-driven
  do
  {
    // menu to choose the operation
    printf("\nChoose the matrix operation,\n");
    printf("----------------------------\n");
    printf("1. A+B\n");
    printf("2. A-B\n");
    printf("3. B-A\n");
    printf("4. A*B\n");
    printf("5. Exit\n");
    printf("----------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        add(a, b, c);
        printf("A+B: \n");
        display(c);
        break;
      case 2:
        subtract(a, b, c);
        printf("A-B: \n");
        display(c);
        break;
      case 3:
        subtract1(a, b, c);
        printf("B-A: \n");
        display(c);
        break;
      case 4:
        multiply(a, b, c);
        printf("A*B: \n");
        display(c);
        break;
      case 5:
        printf("Thank You.\n");
        exit(0);
      default:
        printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
    }
  }while(1);

  return 0;
}
