/* Програма, в която въвеждаме брой на елементите(дроби) за отпечтване изчислява тяхната сума и я извежда. */

#include <stdio.h>
#include <math.h>

int main()
{
    int i, numberOfTerms;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &numberOfTerms);
    printf("\n\n");

    for (i = 1; i <= numberOfTerms; i++)
    {
        if (i < numberOfTerms)
        {
            printf("1/%d + ", i);
            sum += 1 / (float)i;
        }
        if (i == numberOfTerms)
        {
            printf("1/%d", i);
            sum += 1 / (float)i;
        }
    }

    printf("\nSum of series up to %d terms: %f\n", numberOfTerms, sum);

    return 0;
}