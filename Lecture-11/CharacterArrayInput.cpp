// CharacterArrayInput.cpp
#include <iostream>
using namespace std;

void ReadString(char *a, int s, char delimiter = '\n') {
	int i = 0;
	char ch = cin.get();
	while (i < s - 1 and ch != delimiter) {
		a[i] = ch;
		i++;

		ch = cin.get();
	}
	a[i] = '\0';
}

int main() {

	char a[100];

	// ReadString(a, 100 , '@');
	cin.getline(a, 100, '$');
	cout << a << endl;

	return 0;
}
















