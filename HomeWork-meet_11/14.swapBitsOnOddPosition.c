/* Обърнете битовете на число, които се намират на нечетна позиция.
Examples:
Case 1: 16 = 1000
        5  = 0101

Case 2:  123 =  1111011
          46 =  0101110  */

#include <stdio.h>

void changeOddBit(int num); // function declaration

int main()
{
    int num;

    printf("\nInput a number: ");
    scanf("%d", &num);

    changeOddBit(num); // calls function to swap position and print the result

    return 0;
}

// swap odd position bits of a given number
void changeOddBit(int num)
{
    int swapedNum = num;
    int start = 1;
   
    while (swapedNum >= start)
    {
        swapedNum = start ^ swapedNum;      // swap bits
        start = start << 2; // shift bits to left by 2 bit
    }

    // print calculated result
    printf("\nEntered number : < %d >", num);
    printf("\nAfter swap Odd position bits, the number is : < %d >", swapedNum);
}