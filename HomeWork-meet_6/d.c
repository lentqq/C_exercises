
#include <stdio.h>

int main()
{
    int res = printf("sime text\n");
    printf("%d", res);
    return 0;
    // int n;
    // long long bin = 0;
    // int j, rem, i = 1;

    // printf("Enter a decimal number: ");
    // scanf("%d", &n);

    // for (j = n; j != 0; j)
    // {
    //     rem = j % 2;
    //     j /= 2;
    //     bin += rem * i;
    //     i *= 10;
    // }

    // printf("%d in decimal = %016lld in binary", n, bin);// to zero-fill my integer output
}

//  int next(int a) 
//  { 
 
//      if (a > 0 && a <= 100) 
//      { 
//          a++; 
//          return next(a); 
//      } 
//  } 
 
//  int main() 
//  { 
//      int a; 
 
//      printf("enter a\n"); 
//      scanf("%d", &a); 
 
//      for (a; a <= 100; a++) 
//      { 
 
//          printf("%d\t", next(a)); 
//      } 
 
//      return 0; 
//  }
