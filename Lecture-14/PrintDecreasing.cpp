#include <iostream>
using namespace std;

void printDecreasing(int n) {
	// base case
	if (n == 0) {
		return;
	}

	// recursive case
	printDecreasing(n - 1);
	cout << n << " ";
}

int main() {

	int n;
	cin >> n;

	printDecreasing(n);

	return 0;
}
















