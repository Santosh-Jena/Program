/*Write a program which reads a string and prints it in alphabetical order. For example, the
word WELCOME should be displayed as CEELMOW. */
#include<stdio.h>
#include<string.h>

void main()
{
 char a[30],temp;
 int n=0,j,i;
 printf("Enter the string\n");
 gets(a);
 while(a[n]!='\0')
 {
  n++;
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 printf("The string in alphabetical order is\n");
 for(i=0;i<n;i++)
 {
  printf("%c",a[i]);
 }
 getch();
}

