// CheckPrime.cpp
#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;
	bool isPrime = true;

	for (i = 2; i < n; ++i)
	{
		if (n % i == 0) {
			isPrime = false;
		}
	}

	if (isPrime == true) {
		cout << n << endl;
	}

	// if (isPrime == true) {
	// 	cout << "Prime" << endl;
	// }
	// else {
	// 	cout << "Not Prime" << endl;
	// }

	// int x;
	// cin >> x;
	// cout << 2 * x << endl;

	return 0;
}
















