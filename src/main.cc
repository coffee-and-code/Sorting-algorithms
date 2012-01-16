#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.hh"
#include "sorter.hh"

void usage() {
	printf("usage:\n");
	printf("sorter <n> <algorithm>\n");
}

int main(int argc, char *argv[]) {
	if (argc < 3) {
		usage();
		exit(1);
	}

	int n = atoi(argv[1]);
	char *algorithm = argv[2];

	List *list = new List(n);
	Sorter *sorter = new Sorter(algorithm);

	printf("before:\n");
	list->print();

	sorter->sort(list->get());

	printf("\nafter:\n");
	list->print();
}
