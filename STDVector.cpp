#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<double> newVector;

	for (int i = 0; i <= 10; i++) {
		newVector.push_back(i);
	}

	newVector.insert(newVector.begin(), 5);


	for (int i = 0; i < newVector.size(); i++) {
		cout << newVector[i] << endl;
	}

	newVector.erase(newVector.begin(), newVector.end());

	if (newVector.empty()) {
		cout << "Vector is empty" << endl;
	}
	system("pause");
}
