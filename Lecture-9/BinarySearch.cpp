// BinarySearch.cpp
#include <iostream>
using namespace std;
int BinarySearch(int a[], int n, int key) {
	int s = 0, e = n - 1, m;

	while (s <= e) {
		m = (s + e) / 2;
		if (a[m] == key) {
			return m;
		}
		else if (key > a[m]) {
			s = m + 1;
		}
		else {
			e = m - 1;
		}
	}
	// s>e, key is not found
	return -1;
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);
	int key = 0;
	int ans = BinarySearch(a, n, key);

	if (ans == -1) {
		cout << "Not Found\n";
	}
	else {
		cout << "Key Found: " << ans << endl;
	}

	return 0;
}
















