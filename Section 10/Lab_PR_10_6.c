/*Using pointers, write a function that receives a character string and a character as
arguments and deletes all occurrence of this character in the string. The function should return the
corrected string with no holes. */

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void removeAll(char *, const char);


int main()
{
    char str[MAX_SIZE];
    char toRemove;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to remove from string: ");
    toRemove = getchar();

    removeAll(str, toRemove);

    printf("After removing the corrected string is: %s", str);

    return 0;
}

void removeAll(char * str, const char toRemove)
{
    int i, j;
    int len = strlen(str);

    for(i=0; i<len; i++)
    {
        /*
         * If the character to remove is found then shift all characters to one
         * place left and decrement the length of string by 1.
         */
        if(str[i] == toRemove)
        {
            for(j=i; j<len; j++)
            {
                str[j] = str[j+1];
            }

            len--;

            // If a character is removed then make sure i doesn't increments
            i--;
        }
    }
}
