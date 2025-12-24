//My version of implementation

#include <stdio.h>
#include <stdlib.h>


void insertion_sort( int * , int);

int main()
{
	int len , *arr;
	scanf("%d" , &len);
	arr = malloc(sizeof(int)* len);
	for ( int i =0;i<len;i++)
	{
		scanf(" %d" , &arr[i]);
	}
	
	insertion_sort( arr ,len);
	
	for ( int i = 0 ; i < len ;i++)
	{
		printf("%d " , arr[i]);
	}
	
	return 0 ;
}

void insertion_sort ( int * arr , int len)
{

	int from = 0;
	
	while ( from <len)
	{
		for ( int i = from ;i>0 ;i--)
		{
			if ( arr[i] < arr[i-1])
			{
				int temp = arr[i];
				arr[i] = arr[i-1];
				arr[i-1] = temp;
			}
		}
		
		from++;
		
	}
}
