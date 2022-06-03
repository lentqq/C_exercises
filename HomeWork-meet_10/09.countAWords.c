// Напишете C програма за броене на срещания на дума в даден низ с помощта на цикъл.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    char str[100], word[20];
    int lengthStr, lengthWord, temp, wordCounter = 0;

    printf("Enter the string: ");
    gets(str);
    // fgets(str, sizeof(str), stdin);
    printf("Enter a word: ");
    gets(word);
    // fgets(word, sizeof(word), stdin);

    lengthStr = strlen(str);   // initialize length of stirng
    lengthWord = strlen(word); // initialize length of entered word to count

    for (int i = 0; i < lengthStr; i++)
    {
        temp = i;
        for (int j = 0; j < lengthWord; j++)
        {
            if (str[i] == word[j]) // check if the word from string it is a same with entered word for count
            {
                i++;
            }
        }

        if ((i - temp) == lengthWord) // if a same increase counter of serashin word
        {
            wordCounter++;
        }

        i = temp; // initialize new value of inddex 'i'
    }
    printf("\nThe searched word '%s' occurs %d times.", word, wordCounter);

    return 0;
}