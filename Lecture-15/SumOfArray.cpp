// SumOfArray.cpp
#include <iostream>
using namespace std;

int SumOfArray(int *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	// recursive case
	return a[0] + SumOfArray(a + 1, n - 1);
}

int main() {

	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(a) / sizeof(int);


	cout << SumOfArray(a, n) << endl;

	return 0;
}
















