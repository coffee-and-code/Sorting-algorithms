#ifndef LIST_CC
#define LIST_CC

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "list.hh"

List::List(int n) {
	this->list = NULL;
	node *temp = NULL;

	srand(time(NULL));

	for (int i = 0; i < n; i++) {
		temp = (node *)malloc(sizeof(node));
		temp->data = rand();
		temp->next = this->list;
		this->list = temp;
	}
}

node *List::get() {
	return this->list;
}

void List::print() {
	for (node *cur = this->list; cur != NULL; cur = cur->next) {
		printf("%i\n", cur->data);
	}
}

List::~List() {
	delete[] this->list;
}

#endif
