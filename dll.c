#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int val;
	struct node * next;
	struct node * prev;
}Node;


Node * create_node ( int val)
{
	Node * new_node = malloc( sizeof(Node));
	new_node->val = val;
	new_node->next = NULL;
	new_node->prev=NULL;

	return new_node;
}

void print_dll( Node * head)
{
	Node * temp;
	while (head)
	{
		printf("%d " , head->val);
		temp= head;
		head=head->next;
	}

	head = temp;
	while (head)
	{
		printf("%d " , head->val);
		head= head->prev;
	}
}
int main()
{

	Node * n1= create_node(1);
	Node * n2= create_node(89);
	Node * n3= create_node(888);

	n1->next=n2;
	n2->next=n3;
	n2->prev=n1;
	n3->prev=n2;

	print_dll(n1);
	return 0;
}
