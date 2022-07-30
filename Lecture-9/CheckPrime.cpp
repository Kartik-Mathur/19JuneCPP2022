// CheckPrime.cpp
#include <iostream>
using namespace std;

bool CheckPrime(int n) {
	for (int i = 2; i <= n - 1 ; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	int n;
	cin >> n;

	if (CheckPrime(n)) {
		cout << "Prime\n";
	}
	else {
		cout << "Not Prime\n";
	}

	return 0;
}
















