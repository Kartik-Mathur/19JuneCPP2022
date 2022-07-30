// PrintAllPrimes.cpp
#include <iostream>
using namespace std;
// void PrintAllPrimes(int n);
// void PrintAllPrimes(int);
// bool CheckPrime(int n);
// bool CheckPrime(int);

bool CheckPrime(int n) {
	for (int i = 2; i <= n - 1 ; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void PrintAllPrimes(int n) {
	for (int no = 2; no <= n; ++no)
	{
		if (CheckPrime(no) == true) {
			cout << no << " ";
		}
	}
	cout << endl;
}

int main() {

	int n;
	cin >> n;

	PrintAllPrimes(n);

	return 0;
}

