// Count new('\n') rows. To stop the program press "ctrl + z --> EOF".

#include <stdio.h>

int main()
{
  char c;
  int countRows = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
      countRows++;
  }

  printf("The number of rows is: %d", countRows);

  return 0;
}