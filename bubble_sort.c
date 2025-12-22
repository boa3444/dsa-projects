#include <stdio.h>
#include <stdlib.h>


void bubble_sort( int * , int );

int main()
{
	int len , *arr;
	scanf("%d" , &len);
	arr = malloc ( sizeof(int) * len);
	for ( int i = 0; i < len;i++)
	{
		scanf(" %d" , &arr[i]);
	}

	bubble_sort(arr , len);
	for ( int i = 0 ; i < len ;i++)
	{
		printf("%d " , arr[i]);
	}

	return 0 ;
}

// in modified version we check after each full iteration if any swap was done or not
void bubble_sort(int * arr , int temp)
{
	int len = temp-2;
	int swap_done = 0;
	while ( len >= 0)
	{
		for ( int i=0;i< len;i++)
		{
			if ( arr[i] > arr[i+1] )
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				swap_done =1;
			}

		}

		if ( swap_done == 0 )
			return ;
		len--;
	}
}
