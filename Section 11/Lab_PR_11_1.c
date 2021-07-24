/*A student is represented by the following attributes:
− Roll number (int)
− Name (string)
− Mark in subject 1 (float)
− Mark in subject 2 (float)
− Mark in subject 3 (float)
Write a program using structure to create data for 50 students and then find the total marks for each
student and average mark of all students. */

#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float sub1;
    float sub2;
    float sub3;
    float total;
    float avg;

} s[50];

int main() {
    int i;
    printf("Enter information of students:\n");
    for (i = 0; i < 50; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number %d\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter sub1 mark: ");
        scanf("%f", &s[i].sub1);
         printf("Enter sub2 mark: ");
        scanf("%f", &s[i].sub2);
         printf("Enter sub3 mark: ");
        scanf("%f", &s[i].sub3);

    }
    printf("Displaying Information:\n\n");

    for (i = 0; i < 50; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("\nSub1: %.1f", s[i].sub1);
        printf("\nSub2: %.1f", s[i].sub2);
        printf("\nSub3: %.1f", s[i].sub3);
        printf("\n");
    }
    for(i=0;i<50;i++)
    {
        s->total=s->total+s[i].sub1+s[i].sub2+s[i].sub3;
    }
    s->avg=s->total/50;
    printf("\nTotal=%f",s->total);
    printf("\nAverage=%f",s->avg);
    return 0;
}
