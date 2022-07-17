// CountCharacters.cpp
#include <iostream>
using namespace std;

int main() {

	char ch;
	int cnt = 0;
	// To read whitespace characters
	// we use,
	// char ch;
	// ch = cin.get();

	// instead of cin >> ch;

	// cin >> ch; // Intialization
	ch = cin.get();

	while (ch != '$') { // Condition check
		cnt++;

		// cin >> ch; // Updation
		ch = cin.get();
	}

	cout << "Number of characters: " << cnt << endl;
	return 0;
}
















