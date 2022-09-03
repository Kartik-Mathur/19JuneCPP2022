#include <iostream>
using namespace std;

int main() {

	// int a[][3] = {
	// 	{1, 2, 3},
	// 	{4, 5, 6},
	// 	{7, 8, 9}
	// };

	// int n = 3, m = 3;

	int a[100][100];
	int n, m;
	cin >> n >> m;

	// for (int r = 0; r < n; ++r)
	// {
	// 	for (int c = 0; c < m; ++c)
	// 	{
	// 		cin >> a[r][c];
	// 	}
	// }
	int number = 1;
	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < m; ++c)
		{
			a[r][c] = number++;
		}
	}
	int key;
	cout << "Enter key: ";
	cin >> key;
	bool keyMili = false;

	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < m; ++c)
		{
			// cout << a[r][c] << " ";
			if (a[r][c] == key) {
				keyMili = true;
				cout << "Key found\n";
			}
		}
		// cout << endl;
	}
	if (keyMili == false) {
		cout << "Key not found\n";
	}

	return 0;
}
















