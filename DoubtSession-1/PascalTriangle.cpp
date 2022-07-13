#include <iostream>
using namespace std;

int main() {

	int n, r;

	int rows, nt, pt;
	cin >> rows;

	n = 0;
	while (n < rows) {

		int pt = 1;
		cout << 1 << " ";
		r = 1;
		while (r <= n) {
			nt = pt * (n - r + 1) / r;
			cout << nt << " ";

			pt = nt;
			r++;
		}
		cout << endl;
		n++;
	}


	return 0;
}
















