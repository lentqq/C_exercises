/* Create C Program that calculates the value Of purchases In
grocery store. The customer can buy different combination of products.*/

#include <stdio.h>

int main()
{
    int choice;
    float tomatoesSinglePrice = 4.50;
    float flourSinglePrice = 1.80;
    float yogurtSinglePrice = 0.50;
    float funnelSinglePrice = 0.60;
    float sweetsSinglePrice = 1.50;
    float lollipopsSinglePrice = 0.15;
    float tomatoesQuantity, flourQuantity, yogurtQuantity, funnelQuantity, sweetsQuantity, lollipopsQuantity;
    float totalSum, tomatoesSum, flourSum, yogurtSum, funnelSum, sweetsSum, lollipopsSum;

    while (choice != 0 || choice <= 6)
    {
        printf("Hello!!!\nMake you chioce:\nTomatoes - 1 | Flour - 2 | Yogurt - 3 | Funnel ice cream - 4 | Sweets -5 | Lollipops - 6 | Exit - 7\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("What quantity do you want to buy: ");
            scanf("%f", &tomatoesQuantity);
            tomatoesSum = tomatoesQuantity * tomatoesSinglePrice;
            printf("Your temporary account is: %.2f BGN\n", tomatoesSum);
            break;
        case 2:
            printf("What quantity do you want to buy: ");
            scanf("%f", &flourQuantity);
            flourSum = flourQuantity * flourSinglePrice;
            printf("Your temporary account is: %.2f BGN\n", flourSum);
            break;
        case 3:
            printf("What quantity do you want to buy: ");
            scanf("%f", &yogurtQuantity);
            yogurtSum = yogurtQuantity * yogurtSinglePrice;
            printf("Your temporary account is: %.2f BGN\n", yogurtSum);
            break;
        case 4:
            printf("What quantity do you want to buy: ");
            scanf("%f", &funnelQuantity);
            funnelSum = funnelQuantity * funnelSinglePrice;
            printf("Your temporary account is: %.2f BGN\n", funnelSum);
            break;
        case 5:
            printf("What quantity do you want to buy: ");
            scanf("%f", &sweetsQuantity);
            sweetsSum = sweetsQuantity * sweetsSinglePrice;
            printf("Your temporary account is: %.2f BGN\n", sweetsSum);
            break;
        case 6:
            printf("What quantity do you want to buy: ");
            scanf("%f", &lollipopsQuantity);
            lollipopsSum = lollipopsQuantity * lollipopsSinglePrice;
            printf("Your temporary account is: %.2f BGN\n", lollipopsSum);
            break;
        case 7:
            totalSum = tomatoesSum + flourSum + yogurtSum + funnelSum + sweetsSum + lollipopsSum;
            printf("Thank you for being our client!\nYour total account is: %.2f BGN\n", totalSum);
            return 1;
            break;

        default:
            printf("We do not have such a product.Your choice have to be between 1 and 7!!!");
            break;
        }
    }

    return 0;
}