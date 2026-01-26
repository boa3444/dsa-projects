#include <stdio.h>
#include <stdlib.h>




typedef struct node {
	int val;
	struct node * next;
	struct node * prev;
}Node;


Node * create_node ( int num)
{
	Node * new_node = malloc( sizeof(Node));
	new_node->val= num;
	new_node->next = NULL;
	new_node->prev = NULL;
	return new_node;
}

void print_cdll( Node * head)
{

	Node * temp = head;

	while (1)
	{
		printf("%d " , head->val);
		if ( head->next == temp)
			break;
		head= head->next;
	}

	temp = head;
	//last val of head == n3
	printf("\n");
	while (1)
	{
		printf("%d ", head->val);
		if ( head->prev == temp)
			break;
		head = head->prev;
	}



}

int main()
{
	Node * n1 = create_node(34);
	Node * n2 = create_node(89);
	Node * n3 = create_node(42);


	n1->next = n2;
	n1->prev = n3;
	n2->next = n3;
	n2->prev = n1;
	n3->next = n1;
	n3->prev = n2;

	print_cdll(n1);
	return 0 ;
}
