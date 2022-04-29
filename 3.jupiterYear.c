#include <stdio.h>
#include <math.h>

int main()
{

    int earthDays;
    float jupiterYears;

    printf("Entert days: ");
    scanf("%d", &earthDays);
    jupiterYears = earthDays / 4380.00;

    printf("That are %.2f Jupiters years", jupiterYears);

    return 0;
}