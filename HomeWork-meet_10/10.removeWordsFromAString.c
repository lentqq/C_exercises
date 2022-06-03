// Напишете C програма за премахване на всички срещания на дадена дума в низ с помощта на цикъл.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    char str[100], word[20];
    int lengthStr, lengthWord, temp, j, wordCounter = 0;

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
        for (j = 0; j < lengthWord; j++)
        {
            if (str[i] == word[j]) // check if the word from string it is a same with entered word for delete
            {
                i++;
            }
        }

        if ((i - temp) == lengthWord) //if we have a match
        {
            i = temp; // initialize new value of inddex 'i'

            // move all the characters back, to the place of first index of searshing word
            for (j = i; j < (lengthStr - lengthWord); j++)
            {
                str[j] = str[j + lengthWord];
            }
            lengthStr = lengthStr - lengthWord;//initialize new length of string
            str[j] = '\0';
        }
    }
    printf("\nThe new string is %s", str);

    return 0;
}