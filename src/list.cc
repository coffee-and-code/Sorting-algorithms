#ifndef LIST_CC
#define LIST_CC

#include <stdlib.h>
#include <time.h>

#include "list.hh"

List::List(int n) {
	this->n = n;
	this->list = new int[n];

	srand(time(NULL));

	for (int i = 0; i < n; i++) {
		this->list[i] = rand();
	}
}

int *List::get() {
	return this->list;
}

List::~List() {
	delete[] this->list;
}

#endif
