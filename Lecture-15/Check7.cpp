// Check7.cpp
#include <iostream>
using namespace std;

bool Check7(int *a, int n) {
	// base case
	if (n == 0) {
		return false;
	}

	// recursive case
	if (a[0] == 7) {
		return true;
	}
	return Check7(a + 1, n - 1);
}


int main() {

	int a[] = {1, 2, 3, 17, 71, 6, 4, 5};
	int n = sizeof(a) / sizeof(int);

	if (Check7(a, n)) {
		cout << "7 is present\n";
	}
	else {
		cout << "7 is not present\n";
	}

	return 0;
}
















