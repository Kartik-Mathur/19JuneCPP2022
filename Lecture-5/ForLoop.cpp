// ForLoop.cpp
#include <iostream>
using namespace std;

int main() {

	int i = 1;
	while (i <= 3) {
		cout << i << " ";
		i++;
	}
	cout << endl;
	// For loop: 1st way
	for (i = 1 ; i <= 3 ; i++) {
		cout << i << " ";
	}
	cout << endl;


	// For loop: 2nd way
	i = 1;
	for ( ; i <= 6 ; ) {
		cout << i << " ";

		i++;
	}
	cout << endl;


	return 0;
}
















