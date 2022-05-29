# include<stdio.h>
# define SIZE 5;

int main()
{

int arr[7] = {25,10,100,34,57,48,50};
int max = 0;

      for(int i =0; i < 7; i++)
	  {
		  if(arr[i] > max)
		  {
             max  = arr[i];
		  }
	  }

		  printf("\nThe biggest number is: %d\n", max);

	return  0;
}
