// PrintAllEven.cpp
#include <iostream>
using namespace std;

int main() {

	int i, n;
	cin >> n;

	i = 1;// Intialization
	while (i <= n) { // Condition Check
		// Work
		if (i % 2 == 0) {
			cout << i << ' ';
		}

		i = i + 1; // Updation
	}
	cout << endl; // endl == '\n'

	return 0;
}
















