//  Направете на нула битовете в числа, намиращи се на позиции между 3 и 7.

#include <stdio.h>

unsigned char makeZero(int num); // function declaration
void bin(int num);               // function declaration

int main()
{

    int num;

    printf("\nInput a number: ");
    scanf("%d", &num);

    printf("\nThe new number is < %d >", makeZero(num)); // calls function to return converted number
    printf("\nTne binary code of entered number %d = ", num);
    bin(num); // calls function to print binary code of number
    printf("\nTne binary code of new number      %d = ", makeZero(num));
    bin(makeZero(num));

    return 0;
}

//function initialization to make last 4 bits zero and return the new number
unsigned char makeZero(int num)
{
    unsigned char result = (num >> 4);
    return result;
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
