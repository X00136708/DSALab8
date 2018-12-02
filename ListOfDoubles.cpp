#include "listofdoubles.h"
#include <iostream>
#include <string>
using namespace std;

DoubleListNode::DoubleListNode() {

}
DoubleListNode::DoubleListNode(double val)
	:next(NULL), theValue(val)
{}

ListOfDoubles::ListOfDoubles()
	: head(NULL)
{}

struct ListOfDoubles::Item {
	Item(const double& d) : val(d), next(nullptr)
	{}
	double val;
	Item *next;
};


void ListOfDoubles::push(const double& val) {
	if (head == NULL) {
		head = new Item(val);
		cout << "Stack created";
	}
	else {
		Item* tmp = head;
		head = new Item(val);
		head->next = tmp;
	}
}



void ListOfDoubles::pop() {
	if (head != NULL) {
		Item* tmp = head;
		head = head->next;
		delete tmp;
	}
	else {
		cout << "Stack is empty";
	}
}

double ListOfDoubles::top() {
	if (head != NULL) {
		return head->val;
	}
	else {
		cout << "Stack is empty";
	}
}



ostream& operator<<(ostream& inputStream, const ListOfDoubles& a) {
	while (a.head != NULL) {
		inputStream << "Value: " << a.top() << endl;
		a.pop();
	} //Not sure about these errors
		return inputStream;
	

}
