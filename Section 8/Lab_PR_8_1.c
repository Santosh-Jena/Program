/*Write a program to find out the length of a string without using the strlen() function.
*/
#include <stdio.h>

void main()
{
    char* string;
    int i, length = 0;

    printf("Enter a string \n");
    gets(string);
    /*  keep going through each character of the string till its end */
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length of %s = %d\n", string, length);
}
