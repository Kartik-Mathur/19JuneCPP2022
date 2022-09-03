// MazeWays.cpp
#include <iostream>
using namespace std;

int MazeWays(int n, int m) {
	if (n == 0 and m == 0) {
		return 1;
	}

	if (n < 0 || m < 0) {
		return 0;
	}

	return MazeWays(n - 1, m) + MazeWays(n, m - 1);
}

int main() {

	int n = 3, m = 3;
	cout << MazeWays(n, m) << endl;

	return 0;
}
















