#include <stdio.h>
#include <stdlib.h>


typedef struct node {
	int value;
	struct node * prev;
	struct node * next;
}Node;


Node * node_create ( int val)
{
	Node * new_node = (Node *) malloc ( sizeof(Node));
	new_node->value = val;
	new_node->prev = NULL;
	new_node->next = NULL;


	return new_node;
}

void print_ll ( Node * head)
{

//	Node * tail = malloc(sizeof(Node));
	while ( head)
	{
		printf("%d " , head->value);
		if ( head->next == NULL)
			break;
		head = head->next;
	}

	while ( head )
	{
		printf("%d ", head->value);
		head = head->prev;
	}
}
int main()
{
	Node * node1 = node_create(4);
	Node * node2 = node_create(90);
	Node * temp_node= node_create(89);
	Node * node3 = node_create(33);



	node1->next = node2;
	node2->prev = node1;
	node2->next = temp_node;
//	temp_node->prev = node2;
	temp_node->next = node3;
	node3->prev = temp_node;


	print_ll(node1);
	return  0 ;
}
