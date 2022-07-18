#include <iostream>
using namespace std;

int main() {

	int n, row, j;

	int rows, nt, pt;
	cin >> n;

	for (int rows = 0; rows < n; ++rows)
	{
		int pt = 1;
		cout << 1 << " ";
		for (j = 1 ; j <= rows ; j++) {
			nt = pt * (rows - j + 1) / j;
			cout << nt << " ";

			pt = nt;
		}
		cout << endl;
	}


	return 0;
}
















