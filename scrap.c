#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	int u=9;
	int *p =&u;
	int *temp = p;
	int a = 0;
	p = &a;
	printf("%d" , *temp);


}
