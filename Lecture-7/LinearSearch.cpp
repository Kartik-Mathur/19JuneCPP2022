// LinearSearch.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	int key = 40;
	bool keyMilli = false;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			cout << "Key found at: " << i << endl;
			keyMilli = true;
		}
	}

	if (keyMilli == false) {
		cout << "Key not found" << endl;
	}

	return 0;
}
















