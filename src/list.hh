#ifndef LIST_HH
#define LIST_HH

class List {
public:
	List(int n);
	int *get();
	~List();
private:
	int n;
	int *list;
};

#endif
