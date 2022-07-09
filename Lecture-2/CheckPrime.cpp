// CheckPrime.cpp
#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;

	i = 2;
	while (i <= n - 1) {
		if (n % i == 0) {
			cout << "Not prime" << endl;
			return 0;
		}

		i = i + 1;
	}
	cout << "Prime" << endl;

	return 0;
}
















