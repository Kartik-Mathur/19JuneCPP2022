// Scopes.cpp
#include <iostream>
using namespace std;

int a = 1000;

int main() {
	cout << a << endl;
	int a = 1;

	if (a > 0) {
		int a = 10;
		cout << a++ << endl;
		cout << "Global a: " << ::a << endl;
	}
	::a = ::a + 10;
	cout << ::a << endl;
	cout << a << endl;

	return 0;
}
















