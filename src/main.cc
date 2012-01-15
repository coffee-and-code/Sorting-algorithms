#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sorter.hh"

void usage() {
	printf("usage:\n");
	printf("sorter <n> <algorithm>\n");
}

int main(int argc, char *argv[]) {
	int n;
	char *algorithm;

	if (argc < 3) {
		usage();
		exit(1);
	}

	n = (int)argv[1];
	algorithm = argv[2];

	if (strcmp(algorithm, "bubble") == 0) {
		printf("selected algorithm: bubble sort\n");
	} else {
		printf("unknown sorting algorithm: %s\n", algorithm);
		exit(1);
	}

	Sorter *sorter = new Sorter(algorithm);
}
