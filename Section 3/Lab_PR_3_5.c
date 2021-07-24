/*: Write a program to read a four-digit integer and print the sum of its digits. [Hint: Use /
and % operators.] */
#include <stdio.h>
int main()

{

    int n ,r ,i ,sum=0 ;
    printf("Enter 4 digit no.");
    scanf ("%d",&n);
    for (i=1;i<=4;i++)
    {

        r= n%10;
        n=n/10;
        sum=sum+r;

    }
    printf ("sum of given no. is %d",sum);
}
