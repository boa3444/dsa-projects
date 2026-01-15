#include <stdio.h>




int main()
{
	int num= 2;
	int * p= &num;
	printf("%zu" , sizeof(p));
	return 0 ;
}
