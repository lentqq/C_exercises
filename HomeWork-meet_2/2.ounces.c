#include <stdio.h>
#include <math.h>

int main()
{

    float ounces;
    float cups;

    printf("How many ounces do you want: ");
    scanf("%f", &ounces);
    cups = ounces / 8.0;

    printf("You will receive %.f cups", ceilf(cups));

    return 0;
}