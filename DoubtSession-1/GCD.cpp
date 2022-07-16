// GCD.cpp
#include <iostream>
using namespace std;

int main() {

	int no1 = 10, no2 = 15;
	int ans;

	int i;
	int chotaNumber;
	if (no1 > no2) {
		chotaNumber = no2;
	}
	else {
		chotaNumber = no1;
	}

	bool kyaGCDmilla = false;
	i = 2;
	while (i <= chotaNumber) {
		if ( (no1 % i == 0) and (no2 % i == 0) ) {
			ans = i;
			kyaGCDmilla = true;
		}

		i = i + 1;
	}
	if (kyaGCDmilla == true) {
		cout << "GCD: " << ans << endl;
		cout << "LCM: " << no1*no2 / ans << endl;
	}
	else {
		cout << "GCD: " << 1 << endl;
		cout << "LCM: " << no1*no2 << endl;
	}


	return 0;
}
















