// 2DArray.cpp
#include <iostream>
using namespace std;

int main() {

	int a[][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int n = 3, m = 3;

	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < m; ++c)
		{
			cout << a[r][c] << " ";
		}
		cout << endl;
	}

	return 0;
}
















