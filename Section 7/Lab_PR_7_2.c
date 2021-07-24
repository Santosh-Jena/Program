/*Write a program to input a square matrix (a matrix of order n × n) and then print its upper
triangular matrix. */
#include<stdio.h>
int main() {
   int rows, cols, r, c, matrix[10][10];
    printf("Please enter a square Matrix \n");
   printf("Please enter the number of rows for the matrix: ");
   scanf("%d", &rows);
   printf("\n");
   printf("Please enter the number of columns for the matrix: ");
   scanf("%d", &cols);
   printf("\n");
    if(rows!=cols)
    {
         printf("Please enter a correct square Matrix \n");
         exit(0);
    }
    else
   printf("Please enter the elements for the Matrix: \n");
   for(r = 0; r < rows; r++){
      for(c = 0;c < cols;c++){
         scanf("%d", &matrix[r][c]);
      }
   }

   printf("\n\n The Upper Triangular Matrix is: ");
   for(r = 0; r < rows; r++){
      printf("\n");
      for(c = 0; c < cols; c++){
         if(r > c){
            printf("0");
            printf("\t");
         }
         else{
            printf("%d\t ", matrix[r][c]);

         }
      }
   }
   getch();
   return 0;
}
