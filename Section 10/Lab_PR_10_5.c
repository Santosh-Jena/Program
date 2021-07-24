/*
Write a program using function to input a m x n matrix (of integers) and then find the
largest, the 2nd largest, the smallest, and the 2nd smallest numbers in it
*/
#include <stdio.h>
#include <stdlib.h>
void largeSmall(int r,int c,int a[r][c])
{
      int i,j,temp;
      int* elem=a;
      int sm=a[0][0];
      int big=a[0][0];
      for(i=0;i<r;i++)
      {
          for(j=0;j<c;j++)
          {
              if(a[i][j]<sm)
              {
                  sm=a[i][j];
              }
              if(a[i][j]>big)
              {
                  big=a[i][j];
              }
          }
      }
      printf("Smallest=%d Largest=%d\n",sm,big);
    for(i=0;i<r*c;i++)
    {
        for(j=i+1;j<r*c;j++)
        {
            if(*(elem+i)>*(elem+j))
            {
                temp=*(elem+i);
                *(elem+i)=*(elem+j);
                *(elem+j)=temp;
            }
        }
    }

   printf("2nd Smallest No = %d & 2nd Largest No = %d\n",a[0][1],a[r-1][c-2]);

}
int main()
{
   int r,c;
   printf("Enter Number Of Rows\n");
   scanf("%d",&r);
   printf("Enter Number of Column\n");
   scanf("%d",&c);
   int a[r][c],*p,i,j;
   printf("Enter Elements of the matrix\n");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }

   largeSmall(r,c,a);
}
