#ifndef SORTER_HH
#define SORTER_HH

class Sorter {
public:
	Sorter(char *type);
	int sort();
	~Sorter();
private:
	char *type;
};

#endif
