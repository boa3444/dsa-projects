#include <stdio.h>
#include <stdlib.h>


//proper pointer version
typedef struct node {
	int data;
	struct node * poi;
}Node;


Node * create_node( int value)
{
	Node * new_node =(Node *) malloc( sizeof(Node));
	new_node->data= value;
	new_node->poi = NULL;
	return new_node;
}


void print_l_list ( Node * node_to_print)
{

	while ( node_to_print)
	{
		printf("%d " , node_to_print->data);
		node_to_print = node_to_print->poi;
	}

}

int main()
{

	Node * node1 = create_node(12);
	Node * node2 = create_node(0);
	Node * node3 = create_node(133);
	Node * node4 = create_node(12);

	node1->poi = node2;
	node2->poi= node3;
	node3->poi= node4;

	print_l_list(node1);

	return 0 ;
}
