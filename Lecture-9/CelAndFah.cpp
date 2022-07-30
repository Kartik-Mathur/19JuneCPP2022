// CelAndFah.cpp
#include <iostream>
using namespace std;

void printTable(int init, int fval, int step) {
	int f, c;
	f = init;
	while (f <= fval) {
		// c = (5 / 9.0) * (f - 32);
		c = 5 * (f - 32) / 9;

		cout << f << " " << c << endl;


		f = f + step;
	}
}

int main() {

	int init, fval, step;
	cin >> init >> fval >> step;

	printTable(init, fval, step);



	return 0;
}
















