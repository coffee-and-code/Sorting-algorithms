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

void _selectionSort(node *list) {
	node *min;
	int tmp;

	for (node *pos = list; pos != NULL; pos = pos->next) {

		min = pos;

		for (node *cur = pos->next; cur != NULL; cur = cur->next) {
			if (cur->data < min->data) {
				min = cur;
			}
		}

		if (pos != min) {
			tmp = pos->data;
			pos->data = min->data;
			min->data = tmp;
		}
	}
}

void _insertionSort(node *list) {
}

Sorter::Sorter(char *type) {
	this->type = type;
}

void Sorter::sort(node *list) {
	if (strcmp(this->type, "bubble") == 0) {
		_bubbleSort(list);
	} else if (strcmp(this->type, "selection") == 0) {
		_selectionSort(list);
	}
}

Sorter::~Sorter() {}

#endif
