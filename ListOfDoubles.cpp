#include "ListOfDoubles.h"
#include <iostream>
#include <string>
using namespace std;

ListOfDoubles::ListOfDoubles() {

}

ListOfDoubles::~ListOfDoubles() {
	while (head != NULL) {
		pop(); //get rid of everything.
	}
}

struct ListOfDoubles::Item {
	Item(const double& d) : val(d), next(nullptr)
	{}
	double val;
	Item *next;
};


void ListOfDoubles::push(const double& val) {
	if (head == NULL) {
		head = new Item(val);
		cout << "Stack created" << endl;
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
	
		return head->val;
	
	
}



ostream& operator<<(ostream& inputStream, ListOfDoubles& a) {
	while (a.head != NULL) {
		inputStream << "Value: " << a.top() << endl;
		a.pop();
	} 
		return inputStream;
	

}
