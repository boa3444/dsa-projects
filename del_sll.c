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

void print_ll ( Node * head)
{
	while ( head)
	{
		printf("%d " , head->value);
		head = head->next;
	}

}

Node * del_node(Node * head , Node * to_del)
{

	Node * temp = head;

	if ( head == to_del)
	{
		
		return head->next;

}

int main()
{
        Node * n1 = create_n(12);
        Node * n2 = create_n(90);
        Node * n3 = create_n(21);
	Node * n4 = create_n(91);
//        Node * wild_card = create_n(10);


	//del n2;
	Node * head = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;

	print_ll(n1);

	printf("\nAfter del n2\n");
	head = del_node(head , n1);
//	n1->next = n2->next;
	print_ll(n1);
	return 0 ;
}
