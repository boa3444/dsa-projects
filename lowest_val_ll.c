#include <stdio.h>
#include <stdlib.h>


//find lowest val

typedef struct node {
	int val ;
	struct node * next;
}Node;

Node * create_n(int value)
{
	Node * n_node = malloc( sizeof(Node));
	n_node->val = value;
	n_node->next = NULL;

	return n_node;
}

int lowest_val( Node * head)
{
	int min_num= head->val;
	Node * curr = head->next;
	while(curr)
	{
		if ( min_num > curr->val )
			min_num = curr->val;
		curr = curr->next;
	}

	return min_num;

}

int main()
{
	Node * n1= create_n(23);
	Node * n2= create_n(89);
	Node * n3= create_n(8);
	Node * n4= create_n(9);

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
//	n->next = n5;

	int min = lowest_val(n1);
	printf("%d " , min);
	return 0;
}

//w3 school approach
