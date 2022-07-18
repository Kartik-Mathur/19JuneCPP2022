#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n;
	cin >> n;

	int no = n;

	// Finding the sum of digits
	int sum_d = 0;
	while (n > 0) {

		int digit = n % 10;
		sum_d += digit;
		n /= 10;
	}


	// Finding the sum of prime factors
	n = no;
	int sum = 0;
	while (n % 2 == 0) {
		sum += 2;
		n /= 2;
	}
	for (int i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0) {
			// Add the value of i to the sum, also break the i into single
			// digits if i contains digits more than 2 in itself
			int x = i;
			while (x > 0) {
				sum += x % 10;
				x /= 10;
			}

			n /= i;
		}
	}

	if (n > 0) {
		while (n > 0) {
			sum += n % 10;
			n /= 10;
		}
	}

	if (sum == sum_d) {
		cout << "1" << endl;
	}
	else {
		cout << "0" << endl;
	}

	return 0;
}
















