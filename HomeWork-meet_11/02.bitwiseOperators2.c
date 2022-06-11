#include <stdio.h>

unsigned char bitAt(int num, int index)
{
    return (num >> index) & 1;
}

unsigned char clearBit(int num, int index)
{
    return num & (~(1 << index));
}
//////clearBit
// 1101
//&
// 0010
unsigned char setBit(int num, int index)
{
    return num | (1 << index);
}
//////setBit
// 1101
//|
// 0010
int main()
{
    int n = 13;
    int pos = 1;
    unsigned char result = setBit(n, pos);

    printf("%d\n", result);

    // int x = 3;
    // int y = 5;
    // int and = x&y;
    // int or=x|y;
    // int xor=x^y;

    // printf("%d\n",and);
    // printf("%d\n",or);
    // printf("%d\n",xor);

    return 0;
}