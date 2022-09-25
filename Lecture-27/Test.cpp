#include <iostream>
using namespace std;

void print(int n) {
	if (n == 0) return;

	cout << n << " ";
	print(n - 2);
}

void print1(int n) {
	if (n == 0) return;

	cout << n << " ";
	print(n - 2);
}

int main() {


	return 0;
}
















