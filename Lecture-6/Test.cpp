#include <iostream>
using namespace std;

int main() {
	char ch;
	// cin >> ch;
	ch = cin.get();

	if (ch == ' ' || ch == '\n' || ch == '\t') {
		cout << "White space character" << endl;
	}
	else {
		cout << "Other character: " << ch << endl;
	}

	cout << ch;

	return 0;
}
















