/*Write a program using pointers to input a 4X5 matrix and then display it. */
#include<stdlib.h>
int main()
{
	int m, n;
	printf("Enter a 4x5 matrix rows and column: ");
	scanf("%d%d", &m, &n);
	if(m==4&&n==5)
    {
	int **a;
	//Allocate memory to matrix
	a = (int **) malloc(m * sizeof(int *));
	for(int i=0; i<m; i++)
	{
		a[i] = (int *) malloc(n * sizeof(int));
	}
	//Read elements into matrix
	printf("Enter matrix elements: ");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	//Print elements in the matrix
	printf("Matrix elements are: \n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	//Dellocating memory of matrix
	for(int i=0; i<m; i++)
	{
		free(a[i]);
	}
	free(a);
	return 0;
    }
    else
        printf("Enter correct matrix");
}
