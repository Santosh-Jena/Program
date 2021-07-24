/*Admission to professional course is subject to the following conditions:
a) Marks in Mathematics >= 60
b) Marks in Physics >= 50
c) Marks in Chemistry >= 40
d) Total in all three subjects >= 200 (OR) Total in Mathematics and Physics >= 150
4
Write a program that takes as input the marks in three subjects and displays “Admitted” if the student is
admitted else displays “Not Admitted”.
*/
#include<stdio.h>
int main()
{
    int m,p,c,t1,t2;
    printf("Enter the marks in Math :");
    scanf("%d",&m);
     printf("Enter the marks in Physics:");
    scanf("%d",&p);
     printf("Enter the marks in Chemistry:");
    scanf("%d",&c);
    t1=m+p+c;
    t2=m+p;
    if(m>=60)
        if(p>=50)
            if(c>=40)
                if(t1>=200 || t2>=150)
                    printf("Admitted");
                else
                    printf("Not Admitted");
            else
                 printf("Not Admitted");
        else
             printf("Not Admitted");
        else
             printf("Not Admitted");


}
