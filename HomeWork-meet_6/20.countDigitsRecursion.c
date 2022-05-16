/* Напишете програма на C за броене на цифрите на дадено число с
помощта на рекурсивна функция. */

#include <stdio.h>

// function to count digits 
int countDigits(int num);

int main()
{
    int number;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    count = countDigits(number);

    printf("The number of digits is: %d\n", count);

    return 0;
}


// recursive function to count digits
int countDigits(int num)
{
    static int count = 0;

    if (num > 0)
    {
        count++;
        countDigits(num / 10);
    }
    else
    {
        return count;
    }
}
