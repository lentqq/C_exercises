/* The program reads an integer three-digit number, separates the digits and checks if they can be used to create a triangle.
If there is such a triangle, calculate its perimeter, and if it cannot, display the necessary message. */

#include <stdio.h>

int main()
{
    int number;
    int a, b, c;
    char message[80] = "Such a triangle cannot be created. Please enter a new number.";

    do
    {
        // displays the message while the number is out of range
        printf("Enter three-digits number:  ");
        scanf("%d", &number);
    } while (number < 99 || number > 1000);
    {
        a = number % 10;
        b = number / 10 % 10;
        c = number / 100 % 10;
        int perimeter = a + b + c;

        (a < b + c && b < a + c && c < a + b) ? printf("The perimeter of triangle is: %d", perimeter) : printf("%s", message);
    }

    return 0;
}