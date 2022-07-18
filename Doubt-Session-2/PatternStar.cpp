// PatternStar.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int row = 1; row <= (n + 1) / 2; ++row)
	{
		if (row == 1) {
			for (int i = 1; i <= n; ++i)
			{
				cout << "*\t";
			}
		}
		else {
			// 1. Print (n+1)/2  - row + 1'*'
			for (int i = 1; i <= (n + 1) / 2 - row + 1; ++i)
			{
				cout << "*\t";
			}
			// 2. Print 2*(row-1)-1, times spaces
			for (int i = 1; i <= 2 * (row - 1) - 1; ++i)
			{
				cout << "\t";
			}
			// 3. Print (n+1)/2  - row + 1 '*'
			for (int i = 1; i <= (n + 1) / 2 - row + 1; ++i)
			{
				cout << "*\t";
			}
		}
		cout << endl;
	}


	for (int row = (n + 1) / 2 - 1; row >= 1; --row)
	{
		if (row == 1) {
			for (int i = 1; i <= n; ++i)
			{
				cout << "*\t";
			}
		}
		else {
			// 1. Print (n+1)/2  - row + 1'*'
			for (int i = 1; i <= (n + 1) / 2 - row + 1; ++i)
			{
				cout << "*\t";
			}
			// 2. Print 2*(row-1)-1, times spaces
			for (int i = 1; i <= 2 * (row - 1) - 1; ++i)
			{
				cout << "\t";
			}
			// 3. Print (n+1)/2  - row + 1 '*'
			for (int i = 1; i <= (n + 1) / 2 - row + 1; ++i)
			{
				cout << "*\t";
			}
		}
		cout << endl;
	}

	return 0;
}
















