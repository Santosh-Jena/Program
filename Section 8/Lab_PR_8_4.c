/*: Write a program that reads two strings and then compares them without using the
strcmp() function.
*/
#include <string.h>

int stringcompare(char *s1,char *s2)
{
	int i,c=0;
	if(strlen(s1)==strlen(s2))
    {
    	for(i=0;s2[i];i++)
        {
        	if(s1[i]==s2[i])
        	 c++;
 	    }
 	    if(c==i)
          return 1;

    }
    return 0;


}
int main()
{

    char s1[1000],s2[1000],c;

    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  string2: ");
    gets(s2);
    c=stringcompare(s1,s2);
    if(c)
        printf("strings are equal");
    else
        printf("strings are not equal");

	return 0;

}
