// IntToString.cpp
#include <iostream>
using namespace std;

string s[10] = {
	"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
};

void IntToString(int n) {
	// base case
	if (n == 0) {
		return;
	}

	int last_digit = n % 10;
	IntToString(n / 10);
	cout << s[last_digit] << " ";
}

int main() {

	int n = 2048;
	IntToString(n);

	cout << endl;

	return 0;
}
















