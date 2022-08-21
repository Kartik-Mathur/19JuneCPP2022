// StringToInt.cpp
#include <iostream>
#include <cstring>
using namespace std;

int StringToInt(char *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	int ld = a[n - 1] - '0';
	int ca = StringToInt(a, n - 1);
	return ca * 10 + ld;
}

int main() {

	char a[] = "1234";
	int n = strlen(a);

	cout << StringToInt(a, n) << endl;

	return 0;
}
















