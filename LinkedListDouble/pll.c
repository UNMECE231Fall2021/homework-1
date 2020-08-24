#include "print_linked_list.h"

void print_forward(DoubleLinkedList *node) {
	DoubleLinkedList *temp;
	for(temp = node; temp != NULL; temp = temp->next) {
		printf("%d ", temp->value);
	}
	printf("\n");
}

void print_backward(DoubleLinkedList *node) {
	DoubleLinkedList *temp;
	for(temp = node; temp != NULL; temp = temp->prev) {
		printf("%d ", temp->value);
	}
	printf("\n");
}
