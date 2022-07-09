// StarPattern.cpp
#include <iostream>
using namespace std;

int main() {
	int n, row, stars, number;
	cin >> n;

	row = 1, number = 1;
	while (row <= n) {
		// Print stars row times
		stars = 1;
		while (stars <= row) {
			cout << number << " ";
			number = number + 1;
			stars = stars + 1;
		}

		cout << '\n';
		row = row + 1;
	}

	return 0;
}
















