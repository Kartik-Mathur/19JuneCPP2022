#include<iostream>
using namespace std;

void SpiralPrint(int a[][1000], int n, int m) {
	int sr, er, sc, ec;
	sr = sc = 0;
	er = n - 1;
	ec = m - 1;
	int cnt  = 0;

	while (sr <= er and sc <= ec) {
		// 1. Print sr from sc to ec
		for (int col = sc; col <= ec; ++col)
		{
			cout << a[sr][col] << ", ";
			if (++cnt >= m * n) return;
		}
		sr++;

		// 2. Print ec from sr to er
		for (int row = sr; row <= er; ++row)
		{
			cout << a[row][ec] << ", ";
			if (++cnt >= m * n) return;
		}
		ec--;

		// 3. Print er from ec to sc
		if (sr < er) {
			for (int col = ec; col >= sc; --col)
			{
				cout << a[er][col] << ", ";
				if (++cnt >= m * n) return;

			}
			er--;
		}

		// 4. Print sc from er to sr
		if (sc < ec) {
			for (int row = er; row >= sr; --row)
			{
				cout << a[row][sc] << ", ";
				if (++cnt >= m * n) return;

			}
			sc++;
		}
	}
}

int main() {


	int arr[1000][1000];
	int rows, cols;
	cin >> rows >> cols; //4 4

	// input array

	for (int i = 0; i <= rows - 1; i++) {
		for (int j = 0; j <= cols - 1; j++) {
			cin >> arr[i][j];
		}
	}

	SpiralPrint(arr, rows, cols);
	cout << "END\n";



	return 0;
}