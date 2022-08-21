#include <iostream>
using namespace std;

int last7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}
	// recursive case
	if (a[i] == 7) {
		int ni = last7(a, n, i + 1);
		return max(i, ni);
	}
	else {
		return last7(a, n, i + 1);
	}
}

void allOccurances7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return;
	}

	// recursive case
	if (a[i] == 7) {
		cout << i << " ";
	}
	allOccurances7(a, n, i + 1);
}

int main() {

	int a[] = {1, 2, 7, 7, 7, 7, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << last7(a, n, 0) << endl;
	allOccurances7(a, n, 0);
	cout << endl;

	return 0;
}
















