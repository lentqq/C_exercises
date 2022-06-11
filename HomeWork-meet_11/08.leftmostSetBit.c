// Намерете позицията на най-старшия бит, който е със стойност 1 в дадено число.

#include <stdio.h>

int leftmostSetBit(int num); // function declaration
void bin(int num);           // function declaration

int main()
{
    int num;

    printf("\nInput a number: ");
    scanf("%d", &num);

    printf("\nThe binary code of %d = ", num);
    bin(num);

    int position = leftmostSetBit(num); // call function to set position
    printf("\nThe leftmost set bit position is < %d >", position);

    return 0;
}

int leftmostSetBit(int num) // function initialization
{
    int position = 0; // hold position of leftmost set bit
    
    //shift right untill the number > 0
    while (num > 0)
    {
        num = num >> 1;
        position++;
    }
    return position;
}

// function initialization to print number from decimal to binary
void bin(int num)
{
    unsigned i;

    /* for-loop to print binary code of given number in one byte.
    If you want to print 2, 3 or 4 bytes, change 7 in the loop, with 15, 23 or 31. */
    for (i = 1 << 7; i > 0; i /= 2)
    {
        (num & i) ? printf("1") : printf("0");
    }
}