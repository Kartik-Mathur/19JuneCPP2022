// SquareRoot.cpp
#include <iostream>
using namespace std;

int main() {

	float i, inc = 1;

	int j;
	int n;
	cin >> n;

	j = 1;
	while (j <= 3) {

		while (i * i <= n) {
			i = i + inc;
		}
		i = i - inc;

		inc = inc / 10;
		j++;
	}
	cout << i << endl;
	return 0;
}
















