#include <stdio.h>


int fibonacci ( int n)
{
//	int next_ele= first+sec;
	if ( n == 0)
		return 0;
	if ( n==1)
		return 1;
	else
//		printf("%d " ,next_ele);
		return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{

	int ele = 2;
	int first = 0 ;
	int sec = 1;

	int next_ele;
//	printf("0 1 ");
//	for ( int i = 0 ; i< ele-2;i++)
//	{
//		next_ele= first + sec;
//		first = sec;
//		sec = next_ele;
//		printf("%d " , next_ele);
//	}

	int f=fibonacci(6);
	printf("%d ", f);
	return 0 ;
}


