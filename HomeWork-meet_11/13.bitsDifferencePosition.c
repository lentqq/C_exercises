/* Намерете броя на позициите на битовете, в които две числа се различават.

 case 1
 x = 43    (1 0 1 0 1 1)
 y = 25    (0 1 1 0 0 1)

           (1 1 0 0 1 0)
 difference = 3

 Case 2
 x = 12    (1 1 0 0)
 y = 4     (0 1 0 0)

           (1 0 0 0 )
 difference = 1

 Case 3
 x = 7     (1 1 1 )
 y = 7     (1 1 1 )

           (0 0 0 )
 difference  = 0 */

#include <stdio.h>

void bit_difference(int x, int y); // function declaration

int main()
{
    int x, y;

    printf("\nInput two numbers: \n");
    scanf("%d %d", &x, &y);

    bit_difference(x, y);

    return 0;
}

// function initialization to find difference between bits of given two numbers
void bit_difference(int x, int y)
{
    // print given number
    printf("\n Given number ( a : %d, b : %d) ", x, y);
    int num = (x ^ y);
    int count = 0;

    // count number of difference bits
    while (num > 0)
    {
        count++;
        num = num & (num - 1);
    }

    printf("\n Bit difference : < %d >", (count));
}