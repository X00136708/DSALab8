#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	list<double> newList; //Initialize a list
	
	for (int i = 0; i <= 10; i++) {
		newList.push_back(i); //Add values 0 - 10(inclusive) into the list
	}


	list<double>::iterator insert = find(newList.begin(), newList.end(), 3); //Finds the position where the number 3 is
	newList.insert(insert, 30); //Adds a new value before the number 3

	list<double>::iterator remove = find(newList.begin(), newList.end(), 8); //Finds the position where the number 7 is
	newList.erase(remove); //Removes the value number 7

	list<double>::iterator a = newList.begin(); //Makes a pointer the the start of the list
	while (a != newList.end()) { //While the list isn't at the end
		cout << *a << endl; //Print the list (at the current pointer)
		a++; //Increment the pointer to point to the next object
	}
	system("pause");



}