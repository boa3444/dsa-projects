#include <stdio.h>
#include <stdlib.h>

struct node {
	int number;
	int *p ; //to next nodes value
}


int * create_node ( struct node * new_node)
{
	static int i = 2;
	new_node = malloc ( 12);
	new_node->number = i++;

	return 
