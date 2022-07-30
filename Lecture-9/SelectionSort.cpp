// SelectionSort.cpp
#include <iostream>
using namespace std;

void SelectionSort(int a[], int n) {
	for (int i = 0; i < n - 1; ++i)
	{
		int mi = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (a[j] < a[mi]) {
				mi = j;
			}
		}
		int temp = a[i];
		a[i] = a[mi];
		a[mi] = temp;
	}
}

void printArray(int a[], int n) {
	cout << "Printing Array: ";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}


int main() {

	int a[] = {5, 6, 4, 3, 7, 8, 9, 0, 1};
	int n = sizeof(a) / sizeof(int);

	printArray(a, n);
	SelectionSort(a, n);
	printArray(a, n);

	return 0;
}
















