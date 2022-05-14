#include <stdio.h>
int main()
{

  int hidenNumber = 1234, guessNumber = 1435, bullsCount = 0, cowsCount = 0;

  //  printf("Enter hiden and guess number: \n");
  //  scanf(("%d %d", &hidenNumber, &guessNumber));

  // take digits of hiden number
  int hidenDigit1 = (hidenNumber / 1000) % 10;
  int hidenDigit2 = (hidenNumber / 100) % 10;
  int hidenDigit3 = (hidenNumber / 10) % 10;
  int hidenDigit4 = (hidenNumber / 1) % 10;

  // take digits of guess number
  int digitToCheck1 = (guessNumber / 1000) % 10;
  int digitToCheck2 = (guessNumber / 100) % 10;
  int digitToCheck3 = (guessNumber / 10) % 10;
  int digitToCheck4 = (guessNumber / 1) % 10;

  // 1234
  // 1435
  // use for-loop to check dogits position an find number of bulls and cows
  for (int i = 0; i < 4; i++)
  {
    // check if digits on the same position and increment buul`s counter
    if (digitToCheck1 == hidenDigit1)
    {
      bullsCount++;
    }
    else if (digitToCheck2 == hidenDigit2)
    {
      bullsCount++;
    }
    else if (digitToCheck3 == hidenDigit3)
    {
      bullsCount++;
    }
    else if (digitToCheck4 == hidenDigit4)
    {
      bullsCount++;
    }
    //   bullsCount++;
    //   if (digitToCheck1 != hidenDigit1 || digitToCheck2 != hidenDigit2 || digitToCheck3 != hidenDigit3 || digitToCheck4 != hidenDigit4)
    //     continue;
  }

  for (int j = 0; j < 4; j++)
  {
    // 1234
    // 1435
    // check for the same digits in all positions and increment cows counter
    if (digitToCheck1 == hidenDigit2)
    {
      cowsCount++;
    }
    else if (digitToCheck1 == hidenDigit3)
    {
      cowsCount++;
    }
    else if (digitToCheck1 == hidenDigit4)
    {
      cowsCount++;
    }
    else if (digitToCheck2 == hidenDigit1)
    {
      cowsCount++;
    }
    else if (digitToCheck2 == hidenDigit3)
    {
      cowsCount++;
    }
    else if (digitToCheck2 == hidenDigit4)
    {
      cowsCount++;
    }
    else if (digitToCheck3 == hidenDigit1)
    {
      cowsCount++;
    }
    else if (digitToCheck3 == hidenDigit2)
    {
      cowsCount++;
    }
    else if (digitToCheck3 == hidenDigit4)
    {
      cowsCount++;
    }
    else if (digitToCheck4 == hidenDigit1)
    {
      cowsCount++;
    }
    else if (digitToCheck4 == hidenDigit2)
    {
      cowsCount++;
    }
    else if (digitToCheck4 == hidenDigit3)
    {
      cowsCount++;
    }
  }
  printf("Bulls: %d\tCows: %d ", bullsCount, cowsCount);

  // int decPlaces = 6;
  // float a = 1;
  // float b = 3;
  // float res;
  // res = a / b;
  // printf("%.*lf",decPlaces, res);
  // int num =158702;
  //   int r;
  //   int r2;

  //   r = num % 9;
  // //   r2 = num / 10;
  //   printf("%d\t%d", r, r2);

  return 0;
}