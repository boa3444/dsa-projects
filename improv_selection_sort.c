#include <stdio.h>
#include <stdlib.h>


void improv_selection_sort( int * , int );

int main()
{
	int size , *arr;
	scanf("%d", &size);
	arr = malloc ( sizeof(int) * size);
	for ( int i =0;i<size;i++)
	{
		scanf(" %d" , &arr[i]);
	}

	improv_selection_sort(arr , size);
	for ( int i = 0;i< size;i++)
	{
		printf(" %d" , arr[i]);
	}

	return 0 ;
}

//in the improved version we find the min from unsorted part and swap it with first element in the unsorted part and the swapped ones become sorted array's parts
void improv_selection_sort ( int * arr , int size)
{
	int min= arr[0], min_ind;
	int swap_at = 0;

	while ( swap_at < size)
	{
		min= arr[swap_at];
		for ( int i = swap_at ;i< size;i++)
		{
			if ( min > arr[i])
			{
				min = arr[i];
				min_ind = i;
			}

		}
//		printf("Min: %d\n" , min);
		int temp = arr[swap_at];
		arr[swap_at] = min;
		arr[min_ind] = temp;

		swap_at++;
	}
}
