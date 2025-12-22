#include <stdio.h>
#include <stdlib.h>

void insertion_sort( int * , int);

int main()
{
	int size, *arr;
	scanf("%d" , &size);
	arr = malloc ( sizeof(int) * size);
	for ( int i = 0;i< size ;i++)
	{
		scanf(" %d" , &arr[i]);
	}


	insertion_sort( arr , size);
	for ( int i = 0  ; i< size;i++)
	{
		printf("%d " , arr[i]);
	}

	return 0 ;
}

void insertion_sort( int * arr , int size)
{
	int start=1;
	while ( start < size)
	{
		for ( int i =start ; i>0 ; i--)
		{
			if ( arr[i] < arr[i-1])
			{
				int temp = arr[i];
				arr[i]= arr[i-1];
				arr[i-1] = temp;
			}
		}

		start++;
	}
}
