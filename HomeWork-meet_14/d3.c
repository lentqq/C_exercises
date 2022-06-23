// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int *numberOfChars(char *s, int n)
// {
//     int *numbers = (int*)malloc(26 * sizeof(int));

//     char c = s[0];

//     for (int i = 0; c != '\0'; i++)
//     {
//         c = s[i];
//         int flag = 1;
//         for (char letter = 'a'; letter <= 'z' && flag; letter++)
//         {
//             if (c == letter)
//             {
//                 int temp = (int)(letter - 'a');
//                 numbers[temp]++;
//                 flag = 0;
//             }
//         }
//     }
//     return numbers;
// }

// int main()
// {
//     char *word = (char *)malloc(80 * sizeof(char));
//     scanf("%s", &word);
//     int *num = (int *)malloc(26 * sizeof(int));
//     int length = strlen(word);
//     num = numberOfChars(word, length);

//     for (int j = 0; j < 26; j++)
//     {
//         printf("%d  ", num[j]);
//     }

//     free(word);
//     free(num);

//     return 0;
// }

//=======================================================

// replace character
//  #include<stdio.h>
//  #include<stdlib.h>

// char * returnString(char * arr, char a , char b){

//     for(int i = 0 ; *(arr+i) != '\0' ;i++){
//         if(arr[i]==a){
//             arr[i]=b;
//         }
//     }

//     return arr;
// }

// int main(){
//     char * strrr = malloc(50);
//     printf("Enter string : ");
//     scanf("%s",strrr);
//     strrr=returnString(strrr,'a','c');
//     printf("%s",strrr);
// }

// zad 6

#include <stdio.h>
#include <stdlib.h>
// Struktora za opashka
typedef struct Queue
{
    int *arr;
    struct Queue *next;
} Queue;
// Dva pointara koito shte sochat na front-a i end-a na opashkata
Queue *front = NULL;
Queue *rear = NULL;

// Obiknovena enQueue funkciq koqto vzima kato parametur pointer kum int
void enQueue(int *arr)
{
    Queue *temp = (Queue *)malloc(sizeof(Queue));
    temp->arr = arr;
    if (front == NULL)
    {
        front = temp;
        rear = temp;
        temp->next = NULL;
    }
    else
    {
        rear->next = temp;
        rear = temp;
        temp->next = NULL;
    }
}
// Obiknovena deQueue funkciq koqto maha predniq element ot opashkata (ne se izpolzva prosta sum q napisal)

void deQueue()
{
    if (front == NULL)
    {
        return;
    }

    Queue *temp = front;
    front = temp->next;
    free(temp);
}
// Printirani *arreq ot opashkata
void display()
{
    Queue *temp = front;
    int *arr;
    while (temp != NULL)
    {
        arr = temp->arr;
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", *(arr + i));
        }
        printf("\n");
        temp = temp->next;
    }
}

int main()
{
    int x, y, z;
    int n;
    printf("Enter x :");
    scanf("%d", &x);
    printf("Enter y :");
    scanf("%d", &y);
    printf("Enter z :");
    scanf("%d", &z);
    printf("Enter n :");
    scanf("%d", &n);

    for (int i = 0; i < (x + 1); i++)
    {
        for (int j = 0; j < (y + 1); j++)
        {
            for (int k = 0; k < (z + 1); k++)
            {
                if (i + j + k == n)
                {
                    continue;
                }
                else
                {
                    // zadelqme si pamet za masiv ot 3 elementa(x,y,z);
                    int *arr = (int *)malloc(sizeof(int) * 3);
                    // tova e seedno arr[0] = i , arr[1] = j , arr[2] = k
                    *(arr + 0) = i;
                    *(arr + 1) = j;
                    *(arr + 2) = k;
                    // vkarvame arr-q v opashkata
                    enQueue(arr);
                }
            }
        }
    }
    // printirame za  vseki node na queue-to arr-q koito sadurja
    display();

    return 0;
}

// result = mystack->values[mystack->top] = n & 1;
// n = n >> 1;


//EGN

// #include<stdio.h>
// #include<stdbool.h>
// bool gender(int);
// bool validDate(int , int, int);
// void* controlSum(int num[]);
 
// int main()
// {
//     int num[9];
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&num[i]);
//     }
 
//     bool isFemale = gender(num[8]);
 
//     int year = 1900 + (num[0]*10) + num[1];
//     int month = (num[2]*10) + num[3];
//     int date = (num[4]*10) + num[5];
//     bool isValidDate = validDate(year, month, date);
 
//     if(isFemale && isValidDate)
//     {
//         controlSum(num);
//     }
// }
 
// bool gender(int num)
// {
//     if(num % 2 == 0)
//     {
//         return false;
//     }
//     else
//     {
//         return true;
//     }
// }
 
// bool validDate(int year, int month, int date)
// {
//     switch (month)
//     {
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//             if(date >= 0 && date <= 31)
//             {
//                 return true;
//             }
//             break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//             if(date >= 0 && date <= 30)
//             {
//                 return true;
//             }
//         break;
 
//     case 2:
//         if(date >= 0 && date <= 28)
//         {
//             return true;
//         }
//         else if (date >= 0 && date <= 29)
//         {
//             if(year % 400 == 0)
//             {
//                 return true;
//             }
//             else
//             {
//                 return false;
//             }
//         }
 
//     break;
//     }
// }
 
// void* controlSum(int num[])
// {
//     int sum =  (num[0]*2)+(num[1]*4)+(num[2]*8)+(num[3]*5)+(num[4]*10)+(num[5]*9)+(num[6]*7)+(num[7]*3)+(num[8]*6);
//     int contrl = sum % 11;
//     if(contrl == num[9])
//     {
//         printf("Valid");
//     }
//     else
//     {
//         printf("Error");
//     }
// }