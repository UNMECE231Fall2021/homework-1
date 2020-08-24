#include <stdio.h>
#include "single_linked_list.h"

void print_list(SingleLinkedList *node) {
	SingleLinkedList *temp;
	for(temp = node; temp != NULL; temp = temp->next) {
		printf("%d ", temp->value);
	}
	printf("\n");
}

void add_node(SingleLinkedList *base_node, SingleLinkedList *new_node) {
	new_node->next = base_node->next;
	base_node->next = new_node;
}

void rm_node(SingleLinkedList *base_node) {
	if (base_node->next != NULL) {
		base_node->next = base_node->next->next;
	}
}
