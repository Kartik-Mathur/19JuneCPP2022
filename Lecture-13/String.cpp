// String.cpp
#include <iostream>
using namespace std;

int main() {

	string s, s1;
	s = "Zello World";
	cout << s << endl;

	s1 = "Learning Strings";

	if (s > s1) {
		cout << s << " is greater than " << s1 << endl;
	}
	else if (s < s1) {
		cout << s << " is smaller than " << s1 << endl;
	}
	else {
		cout << s << " is equals to " << s1 << endl;
	}

	s += s1;
	cout << s << endl;
	getline(cin, s, '$'); // To take whitespaces input
	cout << s << endl;

	/*
	cout << s1 << endl;
	cout << "Enter s: ";
	cin >> s; // cin ignores whitespaces
	cout << s << endl;

	cin.ignore();
	cout << "Enter string: ";
	getline(cin, s,'$'); // To take whitespaces input
	cout << s << endl;
	*/


	return 0;
}
















