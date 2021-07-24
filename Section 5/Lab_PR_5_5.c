/* : Write a program to find the number of and sum of all integers greater than 100 and less
than 200 that are divisible by 7. */
#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("Numbers are:");
    for(i=101;i<200;i++)
    {
        if(i%7==0)
        {
            printf("%d ",i);
           sum=sum+i;

        }
    }
    printf("\nSum=%d",sum);
}
