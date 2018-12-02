#include <iostream>
#include "ListOfDoubles.h"


using namespace std;

int main() {
	ListOfDoubles list;
	
	list.push(1);
	list.push(3);
	list.push(5);
	list.push(7);
	list.pop();
	cout << list.top();
	// Error on line 63 + 64 on the ListOfDoubles.cpp. Not sure what they are
}