/*  Write a program to input a number and check whether it is palindrome or not (a
palindrome number is a number that remains the same when its digits are reversed, e.g., 16461). */
#include <stdio.h>
int main()
{
    int n, reversedN = 0, remainder, originalN;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalN = n;

    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }


    if (originalN == reversedN)
        printf("%d is a palindrome.", originalN);
    else
        printf("%d is not a palindrome.", originalN);

    return 0;
}
