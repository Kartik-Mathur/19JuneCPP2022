#include <iostream>
using namespace std;

void printPair(int a[], int n, int X) {
	for (int i = 0; i < n - 1; ++i)
	{
		int no1 = a[i];
		for (int j = i + 1; j < n; ++j)
		{
			int no2 = a[j];
			if (no1 + no2 == X) {
				cout << "(" << no1 << ", " << no2 << ") ";
			}
		}
	}
}

int main() {

	int a[] = {1, 3, 2, 2, 0, 4}; // (1,3) (2,2) (0,4)
	int n = sizeof(a) / sizeof(int);

	int X = 4;

	printPair(a, n, X);


	return 0;
}
















