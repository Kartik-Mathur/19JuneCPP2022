// Functions.cpp
#include <iostream>
using namespace std;

void update(int *ax) {
	*ax = *ax + 5;
}

int main() {

	int a = 10;
	int* aptr = &a;

	cout << *aptr << endl;

	update(aptr);

	cout << *aptr << endl;

	return 0;
}
















