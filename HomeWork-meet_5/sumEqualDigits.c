/* Програма, която по въведен брой елементи, които искаме да отпечатаме и по въведена цифра от която са съставени елементите,
отпечатва елементите и тяхната сума. Пример: брой елементи - 3, цифра на елементите - 7, резултат - 7 77 777  сума = 861 */

#include <stdio.h>
#include <math.h>

int main()
{
    long int numberOfTerms, i, digitToPrint = 7;
    long int sum = 0;

    printf("Enter the number of terms: ");
    scanf("%ld", &numberOfTerms);

    for (i = 1; i <= numberOfTerms; i++)
    {
        sum += digitToPrint;
        printf("%ld ", digitToPrint);

        // to each iteration we add zero units --> 7, 70, 700 ... and sum with 7
        digitToPrint = digitToPrint * 10 + 7;
    }

    printf("\nThe sum of the sequence = %d\n", sum);

    return 0;
}