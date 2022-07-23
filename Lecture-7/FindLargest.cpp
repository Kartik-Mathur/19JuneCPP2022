// FindLargest.cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {

	int a[] = {1, 2, 13, 4, 5};
	int n = sizeof(a) / sizeof(int);

	int l = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] > l) {
			l = a[i];
		}
	}
	cout << "Largest: " << l << endl;

	return 0;
}
















