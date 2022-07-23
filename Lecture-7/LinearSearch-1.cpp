// LinearSearch - 1.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5}, i ;
	int n = sizeof(a) / sizeof(int);
	int key = 0;
	for (i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			cout << "Key found at: " << i << endl;
			break;
		}
	}

	if (i == n) {
		cout << "Key not found" << endl;
	}


	return 0;
}
















