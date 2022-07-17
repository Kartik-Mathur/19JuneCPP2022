// CountAllCharacters.cpp
#include <iostream>
using namespace std;

int main() {

	int alphabets, digits, special, spaces;
	alphabets = digits = special = spaces = 0;
	char ch;
	ch = cin.get();
	while (ch != '$') {
		// work
		if (ch >= '0' and ch <= '9') {
			digits++;
		}
		else if (ch == ' ' || ch == '\n' || ch == '\t') {
			spaces ++;
		}
		else if ( (ch >= 'a' and ch <= 'z') || (ch >= 'A' && ch <= 'Z' ) ) {
			alphabets ++;
		}
		else {
			special++;
		}

		ch = cin.get();
	}

	cout << "Number of alphabets: " << alphabets << endl;
	cout << "Number of digits: " << digits << endl;
	cout << "Number of spaces: " << spaces << endl;
	cout << "Number of special: " << special << endl;





	return 0;
}
















