/* AND operator           OR operator           XOR operator
3 = 00000011             3 = 00000011          3 = 00000011
       &                         |                    ^
5 = 00000101             5 = 00000101          5 = 00000101
______________           _____________         _____________

    00000001 = 1             00000111 = 7          00000110 = 6 */

#include <stdio.h>

int main()
{
    int a = 3, b = 5;
    char ba[11] = "0b00000011";
    char bb[11] = "0b00000101";

    printf("\nThe binary code of %d  =  %s", a, ba);
    printf("\nThe binary code of %d  =  %s", b, bb);
    printf("\nOutput of A & B is:%d  =  0b00000001\n", a & b);
    printf("\nThe binary code of %d  =  %s", a, ba);
    printf("\nThe binary code of %d  =  %s", b, bb);
    printf("\nOutput of A | B is:%d  =  0b00000111\n", a | b);
    printf("\nThe binary code of %d  =  %s", a, ba);
    printf("\nThe binary code of %d  =  %s", b, bb);
    printf("\nOutput of A ^ B is:%d  =  0b00000110\n", a ^ b);
    printf("\nOutput of a ^ a is: %d\n// variable with XOR, itself always is 0", a ^ a); // variable with XOR, itself always is 0

    return 0;
}