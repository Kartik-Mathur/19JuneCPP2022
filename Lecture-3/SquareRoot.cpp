// SquareRoot.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	double i = 0, inc = 1;
	int x = 1;
	while (x <= 4) {
		while (i * i <= n) {
			i = i + inc;
		}

		i = i - inc;

		inc = inc / 10;
		x = x + 1;
	}
	cout << i << endl;

	return 0;
}
















