// SumOfNNumbers.cpp
#include <iostream>
using namespace std;

int Sum(int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	// recursive case, Sum(n) = n + Sum(n-1)
	int ChotaSum = Sum(n - 1); // Hey recursion please dede answer, Assumption(Blind trust)
	int BadaSum = n + ChotaSum;

	return BadaSum;
}

int Sum(int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	return Sum(n - 1) + n;
}

int main() {

	int n;
	cin >> n;

	cout << Sum(n) << endl;

	return 0;
}
















