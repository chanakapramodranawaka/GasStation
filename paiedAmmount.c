/*
    Type 'A' fuel = 100
    Type 'B' fuel = 200
    Type 'C' fuel = 300
*/

#include <stdio.h>
int main(void)
{
    int fuel_amount, total;
    char fuel_type;

    printf("#################################\n\n");
    printf("Type A fuel is : $100\n");
    printf("Type B fuel is : $200\n");
    printf("Type C fuel is : $300\n\n");
    printf("#################################\n\n");

    printf("Hello, Please enter your fuel type here : ");
    scanf("%c",&fuel_type);

    printf("Please enter amount of letters here : ");
    scanf("%d",&fuel_amount);

    if(fuel_type == 'A')
    {
        total = fuel_amount * 100;
        printf("Charges is : %d",total);
    }

    else if(fuel_type == 'B')
    {
        total = fuel_amount*200;
        printf("Charges is : %d",total);
    }

    else if(fuel_type == 'C')
    {
        total = fuel_amount*300;
        printf("Charges is : %d",total);
    }
    else
    {
        printf("Invalid Enters");
    }

    return 0;
}
