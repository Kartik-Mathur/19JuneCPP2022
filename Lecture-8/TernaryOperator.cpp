// TernaryOperator.cpp
#include <iostream>
using namespace std;

int main() {

	// syntax:
	// condition ? work1 : work2; // condition: true(work1), false(work2)

	int a = 10;
	bool b;

	a > 0 ? cout << "Hello" << endl : cout << "World" << endl ;

	b = ( (a > 0) ? true : false );
	b == true ? cout << "A is greater than zero\n" : cout << "A is smaller than 0\n";

	// if (a > 0) {
	// 	cout << "Hello" << endl;
	// }
	// else {
	// 	cout << "World" << endl;
	// }


	return 0;
}
















