#include <stdio.h>
#include <stdlib.h>




void selection_sort( int * , int );

int main()
{
	int size , * arr;
	scanf("%d" , &size);
	arr = malloc ( sizeof(int) * size);
	for ( int i = 0; i < size;i++)
	{
		scanf(" %d" , &arr[i]);
	}

	selection_sort( arr , size);
	for ( int i = 0;i<size;i++)
	{
		printf("%d " , arr[i]);
	}

	return 0 ;
}

void selection_sort( int * arr , int len)
{
	int from = 0;
	int min =arr[0], min_ind;

	while ( from < len)
	{
		for ( int i = from;i< len;i++)
		{
			if ( min > arr[i])
			{
				min= arr[i];
				min_ind = i;
			}// minimum found from array stating from an index "from"
		}

		//place min at front of unsorted arr
		for ( int inner_i = min_ind ; inner_i>from ;inner_i--)
		{
			int temp = arr[inner_i];
			arr[inner_i] = arr[inner_i - 1];
			arr[inner_i-1] = temp;
		}

		from++;
		min = arr[from];
	}
}
