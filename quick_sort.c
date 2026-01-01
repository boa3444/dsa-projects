
// better the left and right arr logic here
// manipulate them in such a way that arr changes as well
// you can add start ind and end ind logic in setting_up_pivot

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int setting_up_pivot(int * , int ); //returns the pivot index
void quick_sort(int * arr,int pivot_ind ,int len);


int main()
{
	int * arr , size;
	scanf("%d" , &size);
	for ( int i =0;i<size;i++)
	{
		scanf(" %d" , &arr[i]);
	}

	int main_pivot_ind = setting_up_pivot(arr , size);  //first pivot index

	quick_sort(arr , main_pivot_ind , size);

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

void quick_sort(int * arr, int pivot_ind,int len )
{
	if ((len == 0) || (len == 1))
		return;
//	0 1 2 3 4 5 6
	int * left_arr = malloc ( sizeof(int) * pivot_ind);
	int size_right_arr = (len-1) - pivot_ind;
	int * right_arr = malloc( sizeof(int) * size_right_arr);


	int left_pivot_ind = setting_up_pivot(left_arr , pivot_ind);
	quick_sort(left_arr , left_pivot_ind, left_pivot_ind);

	int right_pivot_ind = setting_up_pivot(right_arr , size_right_arr);
	quick_sort(right_arr , right_pivot_ind, size_right_arr);


}

