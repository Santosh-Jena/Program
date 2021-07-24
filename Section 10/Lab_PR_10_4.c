/*
Write a program using function to input a m x n matrix (of integers) and then transpose
it
*/
#include <stdio.h>
#include <stdlib.h>
void transpose(int a[100][100],int r,int c)
{
    int d[100][100],i,j;
    printf("Transpose Of Matrix\n");
     //print
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
          d[j][i]=a[i][j];
       }
    }
    for(i=0;i<c;i++)
    {
       for(j=0;j<r;j++)
       {
          printf("%d ",d[i][j]);
       }
       printf("\n");
    }
}
int main()
{
    int a[100][100],r,c,i,j;
    printf("Enter Row & Column Of Matrix\n");
    scanf("%d%d",&r,&c);
    printf("Enter Elements In Matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   transpose(a,r,c);
return 0;
}
