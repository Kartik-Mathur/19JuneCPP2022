// CelAndFah.cpp
#include <iostream>
using namespace std;

int main() {

	int init, fval, step, f, c;
	cin >> init >> fval >> step;

	f = init;
	while (f <= fval) {
		// c = (5 / 9.0) * (f - 32);
		c = 5 * (f - 32) / 9;

		cout << f << " " << c << endl;


		f = f + step;
	}


	return 0;
}
















