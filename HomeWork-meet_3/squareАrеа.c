/* Calculate area of square with a side equal to the greater of the desetici and stotici in a given three-digit number.
Note, that some of the numbers may be zero.*/

#include <stdio.h>

int main()
{

    int num;
    int desetici, stotici, area;

    do
    {
        // displays the message while the number is out of range
        printf("Enter three-digits number:  ");
        scanf("%d", &num);
    } while (num < 99 || num > 1000);
    {
        desetici = num / 10 % 10;
        stotici = num / 100 % 10;
        area = (desetici > stotici) ? desetici * desetici : stotici * stotici;

        printf("The area of square is: %d", area);
    }

    return 0;
}