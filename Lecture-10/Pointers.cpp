// Pointers.cpp
#include <iostream>
using namespace std;

int main() {
	// int *a, *x, *y, *z, l; // a,x,y,z are pointers and l is an integer

	int a = 10;
	float f = 1.11;
	char ch = 'A';

	int *ap = &a;
	float *fp = &f;
	char *chp = &ch;

	cout << "&a: " << &a << endl;
	cout << "ap: " << ap << endl;
	cout << "&f: " << &f << endl;
	cout << "fp: " << fp << endl;
	cout << "&ch: " << (int*)&ch << endl;
	cout << "chp: " << (int*)chp << endl;

	// Pointers and garbage value
	int *pt = NULL;
	cout << *pt << endl;
	// if (*pt > 1) {
	// 	cout << "Take left turn\n";
	// }
	// else {
	// 	cout << "Take Right turn\n";
	// }
	// cout << *ap + 10 << endl;




	return 0;
}
















