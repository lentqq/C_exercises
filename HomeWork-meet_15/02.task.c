#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *numberOfChars(char *s, int n)
{
    int *numbers = (int*)malloc(26 * sizeof(int));

    char c = s[0];

    for (int i = 0; c != '\0'; i++)
    {
        c = s[i];
        int flag = 1;
        
        for (char letter = 'a'; letter <= 'z' && flag; letter++)
        {
            if (c == letter)
            {
                int temp = (int)(letter - 'a');
                numbers[temp]++;
                flag = 0;
            }
        }
    }
    return numbers;
}

int main()
{
    char *word = (char *)malloc(80 * sizeof(char));
    scanf("%s", &word);

    int *num = (int *)malloc(26 * sizeof(int));
    int length = strlen(word);

    num = numberOfChars(word, length);

    for (int j = 0; j < 26; j++)
    {
        printf("%d  ", num[j]);
    }

    free(word);
    free(num);

    return 0;
}