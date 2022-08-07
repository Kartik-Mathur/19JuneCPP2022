// DefaultArguments.cpp
#include <iostream>
using namespace std;

int add(int a = 0, int b = 0, int c = 0) {
	return a + b + c;
}

int main() {

	cout << add(1, 2, 3) << endl;
	cout << add(1, 2) << endl;
	cout << add(1) << endl;
	cout << add() << endl;

	return 0;
}
















