#ifndef SORTER_CC
#define SORTER_CC

#include <string.h>
#include "sorter.hh"

void _swap(node *a, node *b) {}

void _bubbleSort(node *list) {
	bool swapped = true;
	int tmp;

	while (swapped) {
		swapped = false;
		
		for (node *cur = list; cur != NULL; cur = cur->next) {
			if (cur->next != NULL && cur->data > cur->next->data) {
				tmp = cur->next->data;
				cur->next->data = cur->data;
				cur->data = tmp;

				swapped = true;
			}
		}
	}
}

Sorter::Sorter(char *type) {
	this->type = type;
}

void Sorter::sort(node *list) {
	if (strcmp(this->type, "bubble") == 0) {
		_bubbleSort(list);
	}
}

Sorter::~Sorter() {}

#endif
