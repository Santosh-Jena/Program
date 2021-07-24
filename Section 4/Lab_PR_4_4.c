/*Write a program that will read the value of x and evaluate the following function:
1 for x>0
y = 0 for x = 0
-1 for x<0
*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x :");
    scanf("%d",&x);
    if(x>0)
        y=1;
        if(x<0)
            y=-1;
            if(x=0)
                y=0;
            printf("y=%d",y);
}
