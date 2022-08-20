// Factorial.cpp
#include <iostream>
using namespace std;

int fact(int n) {
	// 1. Base case
	if (n == 0) {
		return 1;
	}

	return n * fact(n - 1);
}

int main() {
	int n;
	cin >> n;

	cout << fact(n) << endl;

	return 0;
}
/*
int factorial(int n) {
	// 1. Base case
	if (n == 0) {
		return 1;
	}

	// 2. Recurrence relation, fact(n) = n*fact(n-1);
	// Hey recursion hume chota n-1 ka factorial de do, please(Blind Trust)
	int chotaFactorial = factorial(n - 1); // Choti problem solve kari recursion ne
	int badaFactorial = n * chotaFactorial;

	return badaFactorial;
}
*/













