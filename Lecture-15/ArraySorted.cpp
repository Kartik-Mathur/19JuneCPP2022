// ArraySorted.cpp
#include <iostream>
using namespace std;

bool isArraySorted(int *a, int n) {
	// base case
	if (n <= 1) {
		return true;
	}
	// recursive case
	bool kyaChotaSortedHai = isArraySorted(a + 1, n - 1);
	if (a[0] <= a[1] and  kyaChotaSortedHai == true) {
		return true;
	}
	return false;
}

bool isArraySorted1(int *a, int n) {
	// base case
	if (n <= 1) {
		return true;
	}
	// recursive case
	bool kyaChotaSortedHai = isArraySorted1(a, n - 1);
	if (a[n - 1] >= a[n - 2] and kyaChotaSortedHai == true) {
		return true;
	}
	return false;
}

bool isArraySorted2(int *a, int n, int i) {
	// base case
	if (i == n - 1) {
		return true;
	}

	// recursive case
	bool kyaChotaSortedHai = isArraySorted2(a, n, i + 1);
	if (a[i] <= a[i + 1] and kyaChotaSortedHai == true) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int a[] = {1, 3, 4, 5, 6, 7};
	int n = sizeof(a) / sizeof(int);


	if (isArraySorted2(a, n, 0)) {
		cout << "Sorted hai\n";
	}
	else {
		cout << "Sorted nahi hai\n";
	}



	return 0;
}
















