#include <stdio.h>

int main()
{

    unsigned int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    unsigned int sum = 0;
    unsigned int edenici, desetici, stotici, hilqdni;

    edenici = number % 10;
    desetici = (number / 10) % 10;
    stotici = (number / 100) % 10;
    hilqdni = (number / 1000) % 10;

    sum = edenici + desetici + stotici + hilqdni;

    printf("The sum is %d", sum);

    return 0;
}