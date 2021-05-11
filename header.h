#include<string>
using namespace std;

int x=10;

struct Header{
	string atr_name;
	struct Header *link;
};

struct Header* createHeader(struct Header* head, string at_name);
// return type: struct Header
// argument: header type pointer, string name

void show_data(struct Header *p);
// return type: void
// arguments: header type pointer