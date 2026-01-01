#include <stdio.h>
#include <stdlib.h>


int main()
{
	int size=6;
	int *arr = {1,2,3,4,5,6};
	arr = malloc ( sizeof(int ) * size);
	return 0 ;
}
