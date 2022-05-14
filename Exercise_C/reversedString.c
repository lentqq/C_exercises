#include <stdio.h>
#include <string.h>

int main()
{

    char str1 = 'X';
    char str2 = 'M';
    char str3 = 'L';
    printf("Reversed characters are: %c, %c, %c\n", str3, str2, str1);

   // Use strrev() function to reverse a string 
    char str[15] = "Nikolay";
    printf("Reversed string is: %s", strrev(str));

    return 0;
}