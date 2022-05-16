/* Да се напише програма, която използва функция, обръщаща до 20
цифрено цяло число. Водещите нули не се извеждат.
Ако числото 123 е параметър —> връща 321
120 —> 21
Програмата отпечатва резултата от изпълнението на функцията.
long reverse(long n) */

#include <stdio.h>

// function declaration /* function prototype */
long reverse(long n);

int main()
{
    long num;

    printf("Input a number: ");
    scanf("%li", &num);

    printf("The reversed number is: %li", reverse(num)); // call function to reverse the number

    return 0;
}

// function definition to reversed a given number
long reverse(long n)
{
    long reversedNumber;
    int lastDigit;

    while (n != 0)
    {
        lastDigit = n % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        n /= 10;
    }

    return reversedNumber;
}