/*
Напишете следните функции:
 Функция, която проверявя дали едно число е просто
 Функция, която връща най-големия общ делител на две числа
 Функция, която използва горната функция и по даден като параметър
 масив от цели числа, връща НОД на елементите от масива.
*/

#include <stdio.h>
#define SIZE 5

// functions declarations
void isPrime(int num);
int gcd(int firstNum, int secondNum);
int findGCDArr(int arr[], int length);

int main()
{
    int num, firstNum, secondNum, result, length;

    printf("\nEnter a number for check is a Prime: ");
    scanf("%d", &num);
    isPrime(num); // call function

    printf("\nEnter two numbers to find GCD:\n");
    scanf(" %d %d", &firstNum, &secondNum);
    result = gcd(firstNum, secondNum); // call function
    printf("The GCD is [ %d ]", result);

    // for example --> arr[] = {3, 9, 12, 15, 21}
    int arr[SIZE];
    length = sizeof(arr) / sizeof(arr[SIZE]); // find length of array

    printf("\nEnter the elements of array:\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements of array are:\n\n");
    for (int i = 0; i < length; i++)
    {
        printf("[ %d ]\t", arr[i]);
    }

    printf("\n\nThe GCD of array`s elements is: [ %d ]\n", findGCDArr(arr, length));

    return 0;
}

// function initialiozation to find prime number
void isPrime(int num)
{
    int flag = 0;

    // check if number is 0 or 1 and change flag to 1 for non-prime number
    if (num == 0 || num == 1)
        flag = 1;

    for (int i = 2; i <= num / 2; ++i)
    {

        // if num is divisible by i, then num is not prime change flag to 1 for non-prime number and braek loop
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    // check for value of flag and print result usin ternary operator
    (flag == 0) ? printf("[ %d ] is a Prime number.", num) : printf("[ %d ] is Not a prime number.", num);
}

// function initialization to find GCD
int gcd(int firstNum, int secondNum)
{
    {
        if (firstNum == 0)
        {
            return secondNum;
        }
        return gcd(secondNum % firstNum, firstNum);
    }
}

// function intialization to find GCD of elements
int findGCDArr(int arr[], int length)
{
    int result = arr[0];

    for (int i = 1; i < length; i++)
    {
        result = gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}