// MergeSorted.cpp
#include <iostream>
using namespace std;

void MergeSorted(int a[], int b[], int n, int m) {
	int i = n - 1, j = m - 1, k = m + n - 1;
	while (i >= 0 and j >= 0) {
		if (a[i] > b[j]) {
			a[k] = a[i];
			k--;
			i--;
		}
		else {
			a[k--] = b[j--];
		}
	}

	while (j >= 0) {
		a[k--] = b[j--];
	}
}

void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {

	int a[8] = {2, 3, 4, 6};
	int b[4] = {1, 5, 7, 8};

	int n = 4, m = 4;

	printArray(a, n);
	MergeSorted(a, b, n, m);
	printArray(a, n + m);


	return 0;
}
















