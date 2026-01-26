#include <stdio.h>
#include <stdlib.h>


typedef struct node {
	int value;
	struct node * next;
}Node;


Node * create_node ( int num)
{
	Node * new_node = malloc ( sizeof(Node));
	if ( new_node == NULL)
		return 0;

	new_node->value = num;

	new_node->next=NULL;
	return new_node;
}


void print_csll( Node * head)
{

	Node * temp =head;

	while (1)
	{
		printf("%d " , head->value);
		if ( head->next == temp)
			break;
		head = head->next ;
	}

}


int main()
{
	Node * n1 = create_node ( 34);
	Node *n2 = create_node( 67);
	Node *n3 = create_node(90);


	n1->next = n2;
	n2->next=n3;
	n3->next = n1;

	print_csll(n1);

	return 0;
}
