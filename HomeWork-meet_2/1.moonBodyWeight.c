#include <stdio.h>

int main()
{
    int earthBodyWeight;
    float moonBodyWeight;

    printf("Enter your weight: ");
    scanf("%d", &earthBodyWeight);
    moonBodyWeight = earthBodyWeight * 0.17;
    printf("Your body weight on the moon is %.2f kg", moonBodyWeight);

    return 0;
}