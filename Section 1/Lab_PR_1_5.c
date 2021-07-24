/*Write a program that takes the radius of a circle and displays its area and
perimeter.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int r;
    float area,perimeter;
    printf("Enter the radius :");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("Area of the circle is :%f\n",area);
    perimeter=2*3.14*r;
    printf("Perimeter of the circle is :%f",perimeter);

}
/*Program Ends*/
