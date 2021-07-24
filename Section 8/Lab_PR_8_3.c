/*
Write a program that takes as input a string and two numbers n1 and n2 and find the
substring between these two positions. For example, let the string is “Welcome” and the numbers are
n1=2 and n2=5 then the substring will be: “lcom”.
*/
#include<stdio.h>
void main() {
    char string[50];
    printf("Enter a string : ");
    gets(string);
    int n1,n2;
    printf("Enter two indexes to cut the string :\n");
    scanf("%d%d",&n1,&n2);
    char sbstring[n2-n1+2];
    int c,i;
    for(c=0,i=n1;i<=n2;c++,i++) {
        sbstring[c]=string[i];
    }
    sbstring[c]=0;
    printf("The substring will be: \"%s\".\n",sbstring);
}

