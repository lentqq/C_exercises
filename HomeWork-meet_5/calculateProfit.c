// изчислява печалбата или загубата от продажбата на стоки и извежда резултата

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int costPrice, sellingPrice, amount;

 printf("Enter the cost price: ");
 scanf("%d", &costPrice);

 printf("Enter the selling price: ");
 scanf("%d", &sellingPrice);

     amount = sellingPrice - costPrice;

     // use ternary operator
     (amount > 0) ? printf("Profit = %d", amount) : printf("Loss = %d", abs(amount));

    return 0;
}