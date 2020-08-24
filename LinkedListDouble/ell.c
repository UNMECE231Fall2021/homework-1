#include <stdio.h>
#include "edit_linked_list.h"

void add_node(DoubleLinkedList *base_node, DoubleLinkedList *new_node) {
	new_node->next = base_node->next;
	new_node->prev = base_node;
	if (base_node->next != NULL) {
		base_node->next->prev = new_node;
	}
	base_node->next = new_node;
}

void add_at_head(DoubleLinkedList *old_head, DoubleLinkedList *new_head) {
	new_head->prev = NULL;
	new_head->next = old_head;
	old_head->prev = new_head;
}

void rm_node(DoubleLinkedList *base_node) {
	if (base_node->next != NULL) {
		base_node->next->next->prev = base_node;
		base_node->next = base_node->next->next;
	}
}

void rm_at_head(DoubleLinkedList *base_node) {
	if (base_node->next != NULL) {
		base_node->next->prev = NULL;
	}
	base_node->next = NULL;
}
