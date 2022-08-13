#include <iostream>
using namespace std;

int main() {

	int a[][4] = {
		{1, 2, 5, 4},
		{3, 7, 6, 8},
		{10, 11, 23, 25},
		{100, 19, 20, 21}
	};
	int n, m, key = 19;
	n = m = 4;
	bool kyaMilli = false;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i][j] == key) {
				cout << "Key found at: " << i << ", " << j << endl;
				kyaMilli = true;
				break;
			}
		}
		if (kyaMilli == true) {
			break;
		}
	}
	if (kyaMilli == false) {
		cout << "Key not found\n";
	}

	return 0;
}
















