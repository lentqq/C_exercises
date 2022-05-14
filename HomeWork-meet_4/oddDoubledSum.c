/* Find the sum of these elements of a series that are doubled odd numbers if:
a / the row has 41 elements;
b / the number of the elements of the row is entered first;
c / the row is the last element 0;
d / the series has elements whose sum is greater than 999 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num = 0, startRange = 1, endRange = 1000, count, sumOfNumbers = 0, middleSum = 0;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &count);

    // use current time as start point for random generator
    srand(time(0));

    for (int i = 0; i < count; i++)
    {
        // generate and returns a random numbers
        num = (rand() % (endRange - startRange + 1)) + startRange;
        middleSum += num;
        
        // check if it`s an odd number
        if (num % 2 != 0)
        {
            sumOfNumbers = sumOfNumbers + (num * 2);
            printf("%d | %d\n", num, num * 2);
        }
    }

    // check if it`s the sum of all numbers is greater than 1000
    if (middleSum > 1000)
    {
        printf("The sum of doubled odd numbers is: %d\n", sumOfNumbers);
    }
    else
    {
        printf("The sum is less than 1000!!!\n");
    }

    return 0;
}