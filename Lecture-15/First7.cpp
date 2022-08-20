// First7.cpp
#include <iostream>
using namespace std;

int first7(int *a, int n) {
	// base case
	if (n == 0) {
		return -1;
	}

	// recursive case
	if (a[0] == 7) {
		return 0;
	}

	int ans = first7(a + 1, n - 1);
	if (ans == -1) {
		return -1;
	}
	return ans + 1;
}

int pehla7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}
	// recursive case
	if (a[i] == 7) {
		return i;
	}

	int ans = pehla7(a, n, i + 1);
	return ans;
}

int main() {

	int a[] = {1, 2, 3, 17, 7, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << first7(a, n) << endl;
	cout << pehla7(a, n, 0) << endl;
	return 0;
}
















