#include <stdio.h>
#include <stdlib.h>



typedef struct node {
	int value;
	struct node * next;
}Node;

Node * create_n(int num)
{
	Node * new_n = malloc ( sizeof(Node));
	new_n->value = num;
	new_n->next = NULL;
	return new_n;
}

void find_lowest ( Node * head)
{
	int min = head->value;
	while (head)
	{
		if ( min > head->value)
			min = head->value;
		head = head->next;
	}
	printf("%d\n" , min);

}

int main()
{
	Node * n1 = create_n(12);
	Node * n2 = create_n(90);
	Node * n3 = create_n(21);
	Node * wild_card = create_n(10);


	n1->next = n2;
	n2->next = n3;
	printf("Before wc\n");
	find_lowest(n1);

	printf("After wc\n");
	n2->next = wild_card;
	wild_card->next = n3;
	find_lowest(n1);

	return 0;
}
