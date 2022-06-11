// Вдигнете всички битове на 32 битово число,на позиции делящи се на 3.

#include <stdio.h>

int setBitsOnPositionDivided3(int num); // function declaration
void bin(int num);

int main()
{
    /* Example:
     145 = 10010001
     217 = 11011001 */
    int num;

    printf("\nInput a number: ");
    scanf("%d", &num);
    
    printf("\nThe number is: %d", setBitsOnPositionDivided3(num)); // calls function to set all bits on the right position.
      printf("\nTne binary code of entered number %d = ", num);
    bin(num); // calls function to print binary code of number
    printf("\nTne binary code of new number     %d = ", setBitsOnPositionDivided3(num));
    bin(setBitsOnPositionDivided3(num));

    return 0;
}

// finction initialization to set all bits on position divided by 3
int setBitsOnPositionDivided3(int num)
{
    int position = 0; // hold position devided by 3

    int binaryNum = 0; // varaible to store returned number

    for (int i = num; i > 0; i >>= 1)
    {

        // check if position on the right place
        if (position % 3 == 0)
            binaryNum |= (1 << position);

        position++;
    }

    return (num | binaryNum);
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
