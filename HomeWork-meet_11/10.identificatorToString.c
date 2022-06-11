// Напишете макрос, който прави идентификатор на низ (стринг)

#include <stdio.h>
#define TOSTRING(s) #s // define macro to convert varaible to string

int main()
{
    int number = 256;
    printf("\nThe converted result is: %s", TOSTRING(int number = 256));

    return 0;
}