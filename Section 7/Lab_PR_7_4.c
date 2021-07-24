/* Write a program that finds the sum of diagonal elements of a square matrix. */
#include<stdio.h>

void main()
{
    int mat[12][12];
    int i,j,row,col,sum=0;
    printf("Enter a square matrix \n");
    printf("Enter the number of rows and columns for the matrix\n");
    scanf("%d%d",&row,&col);
    if(row!=col)
    {
        printf("Please enter a correct square matrix");
        exit(0);
    }
    printf("Enter the elements of the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    //To add diagonal elements
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }

    printf("The sum of diagonal elements of a square matrix = %d\n",sum);
}

