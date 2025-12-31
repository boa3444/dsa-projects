#include <stdio.h>
#include <stdlib.h>


int setting_up_pivot(int * , int ); //returns the pivot index
void quick_sort(int * arr ,int len);


int main()
{
	int * arr , size;
	scanf("%d" , &size);
	for ( int i =0;i<size;i++)
	{
		scanf(" %d" , &arr[i]);
	}

	int main_pivot_ind = setting_up_pivot(arr , size); //store the first setted pivot final index here

	0 1 2 3 4 5 6 7
	int * left_arr = malloc ( sizeof(int) * main_pivot_ind);
	int size_right_arr = (len-1) - main_pivot_ind;
	int * right_arr = malloc( sizeof(int) * size_right_arr);

	

	for ( int i = 0;i< size;i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


int setting_up_pivot( int * arr, int len)
{
	int pivot = arr[len-1];
	int i = -1;
	for ( int j = 0;j < pivot;j++)
	{
		if (arr[j] < pivot)
		{
//			printf("%d is smaller than %d\n", arr[j], pivot);
			i++;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
//		for ( int ind = 0;ind< len;ind++)
//		{
//			printf("%d ", arr[ind]);
//		}
//		printf("\n");

	}

	int final_ind_pivot = i +1;
	for ( int index = len-1 ;index > final_ind_pivot ;index--)
	{
		int temp = arr[index];
		arr[index] = 	arr[index-1];
		arr[index-1] = temp;
	}

	return final_ind_pivot;
}

void quick_sort(int * arr, int len )
{
	if (len == 1 )
		return;

	setting_up_pivot(arr , len);
	len--;
}
