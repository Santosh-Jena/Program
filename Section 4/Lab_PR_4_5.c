/*: An electricity board charges the following rates for the use of electricity.
− For the first 200 units: 80 paise per unit
− For the next 100 units: Rs. 1.30 per unit
− Beyond 300 units: Rs. 2.00 per unit
All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more that Rs. 400, then
an additional surcharge of 15% of total amount is charged. Write a program to read the name of a
consumer and the number of units consumed and print the charge with his/her name. */
#include<stdio.h>
int main()
{
    char *name;
    float unit,amount,scharge=0.0;
    printf("Enter the name of consumer :");
    scanf("%s",name);
    printf("Enter the unit consumed :");
    scanf("%f",&unit);
    if(unit <=200)
        amount=unit*0.80+100;
    else
    if(unit <=300)
        amount=(unit-200)*1.30+100;
    else
        if(unit >=300)
        amount=unit*2.0+100;

        if(amount >400)
        {
             scharge=amount+amount*0.15;
            printf("\n Name %s = Rs %f",name,scharge);
        }
        else
            printf("\n Name %s = Rs %f",name,amount);
    return 0;

}
