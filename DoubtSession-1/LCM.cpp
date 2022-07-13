// LCM.cpp
#include <iostream>
using namespace std;

int main() {
	// LCM ka way 1
	// int no1 = 2, no2 = 3;
	cin >> no1 >> no2;

	int x = no2;
	while ( (x % no1) != 0) {
		x = x + no2;
	}

	cout << "LCM: " << x << endl;
	int y = no1 * no2 / x;
	cout << "GCD: " << y << endl;



	return 0;
}
















