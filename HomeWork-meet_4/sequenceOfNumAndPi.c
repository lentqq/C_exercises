/* For a given N to calculate A (0) + A (1) + A (2) + ... + A (N), if A (0) = 1, A (K + 1) = 2.A ) +1 for K> = 1.
Calculate with a precision of 6 decimal places the number P according to the formula of Gottfried Leibniz from 1673 */

#include <stdio.h>
#include <math.h>

int main()
{
    int start, numOfElements, k = 1;

    printf("\nEnter a number of elements to print: ");
    scanf("%d", &numOfElements);

    for (start = 1; start <= numOfElements; start++)
    {
        printf("%d\t", k);
        k = k * 2 + 1;
    }

    // We have to use higher value of "n" to get more accurate result.
    long int i, n;
    double sum = 0.0, formula, pi;

    printf("\nEnter number of terms: ");
    scanf("%ld", &n);

    // Applying Leibniz Formula.
    for (i = 0; i < n; i++)
    {
        formula = pow(-1, i) / (2 * i + 1);
        sum += formula;
    }
    pi = 4 * sum;

    printf("\nPI = %.6lf", pi);

    return 0;
}