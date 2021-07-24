/* Write a program to input a number and check whether it is prefect or not (A number is
called perfect if the sum of its divisors is equal to the number itself. For example, 28 is a perfect number
since 1+2+4+7+14=28).
*/
#include <stdio.h>

int isPerfect(int num)
{
    int loop,sum=0;

    for(loop=1; loop<num; loop++)
    {
        if(num%loop==0)
            sum+=loop;
    }

    if(sum==num)
        return 1; /*Perfect Number*/
    else
        return 0; /*Not Perfect Number*/
}


int main()
{
    int num,loop;
    int sum;

    printf("Enter an integer number: ");
    scanf("%d",&num);

    if(isPerfect(num))
        printf("%d is a perfect number.",num);
    else
        printf("%d is not a perfect number.",num);

    return 0;
}
