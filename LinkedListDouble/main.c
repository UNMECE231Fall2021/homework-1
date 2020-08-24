#include <stdio.h>
#include "double_linked_list.h"
#include "edit_linked_list.h"
#include "print_linked_list.h"

int main() {
	DoubleLinkedList l3 = {NULL, 3, NULL};
	DoubleLinkedList l1 = {NULL, 1, NULL};

	add_node(&l1, &l3);
	print_forward(&l1);
	print_backward(&l3);
	printf("\n");

	DoubleLinkedList l2 = {NULL, 2, NULL};

	add_node(&l1, &l2);
	print_forward(&l1);
	print_backward(&l3);

	DoubleLinkedList l0 = {NULL, 0, NULL};
	DoubleLinkedList l4 = {NULL, 4, NULL};

	add_at_head(&l1, &l0);
	add_node(&l3, &l4);
	print_forward(&l0);
	print_backward(&l4);
	printf("\n");

	rm_node(&l2);
	rm_at_head(&l0);
	print_forward(&l1);
	print_backward(&l4);

	return 0;
}
