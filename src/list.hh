#ifndef LIST_HH
#define LIST_HH

#include "node.hh"

class List {
public:
	List(int n);
	node *get();
	void print();
	~List();
private:
	node *list;
};

#endif
