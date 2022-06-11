#include <stdio.h>
#include <inttypes.h>

void rcomment(int c);
void incomment(void);
void echo_quote(int c);

int main(void)
{
    int c, d;

    printf(" To Check /* Quoted String */ \n");/* i have a comennts*/

    while ((c = getchar()) != EOF)
        rcomment(c);

    return 0;
}

void rcomment(int c)
{
    int d;

    if (c == '/')
    {
        if ((d = getchar()) == '*')
            incomment();
        else if (d == '/')
        {
            putchar(c);
            rcomment(d);
        }
        else
        {
            putchar(c);
            putchar(d);
        }
    }
    else if (c == '\'' || c == '"')
        echo_quote(c);
    else
        putchar(c);
}

void incomment()
{
    int c, d;

    c = getchar();
    d = getchar();

    while (c != '*' || d != '/')
    {
        c = d;
        d = getchar();
    }
}

void echo_quote(int c)
{
    int d;

    putchar(c);

    while ((d = getchar()) != c)
    {
        putchar(d);

        if (d == '\\')
            putchar(getchar());
    }
    putchar(d);
    return 0;
}
// #include<stdlib.h>
// typedef struct Struct{char * s;int num;} key_t;

// int main(){
//     key_t s1;
//     printf("Enter num : ");
//      scanf("%d",&s1.num);

//     s1.s = malloc(s1.num);
//     printf("Enter string : ");
//     scanf("%s",s1.s);
    
//     printf("%s\t",s1.s);
//     printf("%d",s1.num);
// }
