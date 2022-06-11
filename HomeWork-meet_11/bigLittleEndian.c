#include <stdio.h>
#include <inttypes.h>

int main()
{
    uint32_t data;

    uint8_t *cptr;

    data = 1;                // Assign data
    cptr = (uint8_t *)&data; // Type cast
    if (*cptr == 1)
    {
        printf("Your computer uses little-endian addressing for byte-oriented instructions.");
    }
    else if (*cptr == 0)
    {
        printf("Your computer uses big-endian addressing for byte-oriented instructions.");
    }

    return 0;
}