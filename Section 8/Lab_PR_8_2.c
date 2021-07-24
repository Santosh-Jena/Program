/*Write a program that will count the number of occurrences of a specific character in a
given line of text.
*/
#include <string.h>

int main()
{
    char s[1000],c;
    int i,count=0;

    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();

    for(i=0;s[i];i++)
    {
    	if(s[i]==c)
    	{
          count++;
		}
 	}

	printf("character '%c' occurs %d times \n ",c,count);



    return 0;
}
