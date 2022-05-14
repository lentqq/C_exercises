/* You are small company and you have a total of 3 caravans at a price of BGN 90 per day and 3 campers at a price BGN 100 per day.
Declare variables for the number of caravans, the priceof caravans, the number of campers and their price.
Make a menu that asks the customer a caravan or camper will want. Make a variable in which to gather */

#include <stdio.h>

int main()
{
    int caravanSinglePrice = 90;
    int camperSinglePrice = 100;
    int caravanNumbers, camperNumbers;
    int totalSum, caravanSum, camperSum;
    int choice;

    printf("Welcome to our website!!!\nWe have 3 caravans and 3 campers\nSee our offers and make your choice!!!\n");
    printf("CARAVAN - 90 BGN per day  |  CAMPER - 100 BGN per day\nFor CARAVAN press - 1\nFor CAMPER press - 2\nFor both - press - 3\n");
    printf("Make you choice: \n");
    scanf("%d", &choice);

    // I use "switch-case" statement to cover different cases
    switch (choice)
    {
    case 1:
        printf("How many caravans do you want to rent: ");
        scanf("%d", &caravanNumbers);
        caravanSum = caravanNumbers * caravanSinglePrice;
        printf("Thank you for being our client. Your account is: %d BGN\n", caravanSum);
        break;
    case 2:
        printf("How many campers do you want to rent: ");
        scanf("%d", &camperNumbers);
        camperSum = camperNumbers * camperSinglePrice;
        printf("Thank you for being our client. Your account is: %d BGN\n", camperSum);
        break;
    case 3:
        printf("How many caravans do you want to rent: ");
        scanf("%d", &caravanNumbers);
        caravanSum = caravanNumbers * caravanSinglePrice;
        printf("Your temporary account is: %d BGN\n", caravanSum);
        printf("How many campers do you want to rent: ");
        scanf("%d", &camperNumbers);
        camperSum = camperNumbers * camperSinglePrice;
        printf("Your temporary account is: %d BGN\n", camperSum);
        break;

    default:
        printf("Please enter 1, 2 or 3");
        break;
    }

    totalSum = caravanSum + camperSum;
    printf("You total account is: %d", totalSum);

    return 0;
}