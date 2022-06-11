/* Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG
не е дефиниран, не печата нищо.*/

#include <stdio.h>
#define DEBUG 1 // set 0 to turn off DEBUG mode
#define PRINT_DEBUG printf("DEBUG is define!!!")// macros to print message

int main()
{
#if DEBUG
    PRINT_DEBUG;
#endif

    return 0;
}
