#ifndef LISTOFDOUBLES_H_
#define LISTOFDOUBLES_H_

#include <iostream>
using namespace std;

class DoubleListNode
{
	friend class ListOfDoubles;
public:
	DoubleListNode();
	DoubleListNode(double = 0);
private:
	double theValue;
	DoubleListNode *next;
};

class ListOfDoubles
{
public:
	friend ostream& operator<<(ostream& stream, const ListOfDoubles& a);
	ListOfDoubles();
	~ListOfDoubles();
	void displayList();
	void push(const double& val);
	void pop();
	double top();

private:
	struct Item;
	Item* head;


};
#endif