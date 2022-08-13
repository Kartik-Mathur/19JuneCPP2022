// InsertionSort.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {7, 6, 8, 4, 3, 2, 0, 1}, j, i, HPC;
	int n = sizeof(a) / sizeof(int);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (i = 1; i < n; ++i)
	{
		HPC = a[i];
		for (j = i - 1; j >= 0; --j)
		{
			if (meraCompare(a[j], HPC)) {
				a[j + 1] = a[j];
			}
			else {
				break;
			}
		}
		a[j + 1] = HPC;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}
















