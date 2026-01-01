#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int size=6;
	int *arr = malloc(sizeof(int) * size);
//	arr = malloc ( sizeof(int ) * size);
	for ( int i = 0; i < size;i++)
	{
		scanf(" %d" , &arr[i]);
	}
	int * new_arr;
	memcpy(new_arr , arr , sizeof(arr));

	for ( int i = 0 ; i < 3; i++)
	{
		new_arr[i] = 9;
	}

	for ( int i = 0 ; i < size;i++)
	{
		printf("%d " , arr[i]);
	}
	return 0 ;
}
