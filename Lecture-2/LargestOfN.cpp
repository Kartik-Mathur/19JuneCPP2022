// LargestOfN.cpp
#include <iostream>
#include <climits> // INT_MAX: 2^31 - 1, INT_MIN: -2^31
using namespace std;

int main() {

	int n, i, no, largest;
	cin >> n;

	// Taking n times input and printing the result
	i = 1;
	largest = INT_MIN;
	while (i <= n) {
		cin >> no;

		// cout << "User entered: " << no << endl;
		if (no > largest) {
			largest = no;
		}

		i = i + 1;
	}

	cout << "Largest number: " << largest << endl;


	return 0;
}
















