#include <iostream>
using namespace std;

int main() {
	int n, i;
	int number;
	bool isPrime;
	cin >> number;

	for (n = 2; n <= number; ++n)
	{
		isPrime = true;
		for (i = 2; i < n; ++i)
		{
			if (n % i == 0) {
				isPrime = false;
			}
		}

		if (isPrime == true) {
			cout << n << " ";
		}

	}
	cout << endl;
	return 0;
}
















