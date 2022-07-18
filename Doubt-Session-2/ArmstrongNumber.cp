// ArmstrongNumber.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n, no;
	cin >> n;

	no = n;

	int sum = 0, digits_cnt = 0;

	while (n > 0) {

		digits_cnt++;
		n /= 10;
	}

	n = no;
	int y = digits_cnt;

	while (n > 0) {
		int ld = n % 10;
		int x = pow(ld, y);
		sum += x;

		n /= 10;
	}

	// cout << sum << endl;
	if (sum == no) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}



	return 0;
}
















