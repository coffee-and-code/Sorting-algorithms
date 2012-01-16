#ifndef SORTER_HH
#define SORTER_HH

#include "node.hh"

class Sorter {
public:
	Sorter(char *type);
	void sort(node *list);
	~Sorter();
private:
	char *type;
};

#endif
