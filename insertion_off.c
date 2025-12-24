//Official version

#include <stdio.h>
#include <stdlib.h>

void insertion_sort( int * , int);

int main()
{

	int len , *arr;
	scanf("%d" , &len);
	arr = malloc ( sizeof(int) * len);
	for ( int i = 0 ;i< len ;i++)
	{
		scanf(" %d" , &arr[i]);
	}

	insertion_sort( arr , len);

	for ( int i = 0 ;i< len ;i++)
	{
		printf("%d " , arr[i]);
	}

	return  0 ;
}

void insertion_sort ( int * arr , int len)
{
//	int from = 1;
	for ( int i = 1 ;i< len ; i++)
	{
		int to_sort = arr[i]
		for ( int inner_i = i ; inner_i > 0 ;inner_i--)
		{
			if ( to_sort < arr[inner_i - 1]
			{
				int temp = to_sort;
				to_sort = arr[inner_i-1];
				arr[inner-1] = temp;
			}

		}
	}
}
