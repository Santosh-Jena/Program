/*An item is represented by the following attributes:
− Either a model number (string) or an item code (string)
− Name (string)
− Price (float)
Write a program using union to read the information for 5 items from the keyboard and print the same on the screen.*/

#include<stdio.h>
#include<string.h>
union itemDetails
{
    char modelNumber[10];
    char itemCode[10];
    char itemName[20];
    float itemPrice;
};

void main()
{
    union itemDetails item[5];
    char modelNo[10],code[10],name[20];
    int i,choice;
    float price;
    for(i=0;i<5;i++)
    {
        printf("\n\npress 1 for model number and 2 for item code : ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("\nModel Number : ");
            scanf("%s",&modelNo);
        }
        else if(choice==2)
        {
            printf("\nItem Code : ");
            scanf("%s",&code);
        }
        printf("\nName : ");
        scanf("%s",&name);
        printf("\nPrice");
        scanf("%f",&price);

        printf("\nITEM DETAILS");
        printf("\n-------------");

        if(choice==1)
        {
            strcpy(item[i].modelNumber,modelNo);
            printf("\nModel Number : %s",item[i].modelNumber);

        }
        else if(choice==2)
        {
            strcpy(item[i].itemCode,code);
            printf("\nItem Code : %s\n",item[i].itemCode);
        }

        strcpy(item[i].itemName,name);
        printf("Name : %s",item[i].itemName);

        item[i].itemPrice=price;
        printf("\nItem Price : %f",item[i].itemPrice);
    }
}