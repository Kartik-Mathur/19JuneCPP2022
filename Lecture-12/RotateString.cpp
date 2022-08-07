// RotateString.cpp
#include <iostream>
using namespace std;

int Length(char *a) {
	int cnt = 0;
	for (int i = 0; a[i] != '\0'; ++i)
	{
		cnt ++;
	}
	return cnt;
}

void RotateString(char *a, int n) {
	int lena = Length(a);
	// 1. shift all characters n position ahead
	for (int i = lena - 1; i >= 0; --i)
	{
		a[i + n] = a[i];
	}
	cout << a << endl;

	// 2. Bring last n characters to front
	for (int i = lena, j = 0; j < n ; i++, j++) {
		a[j] = a[i];
	}
	cout << a << endl;

	// 3. Add '\0' at lena index
	a[lena] = '\0';
}


int main() {

	char a[100] = "Coding";
	cout << a << endl;
	// int n = 3003;
	// n = n % Length(a); // Always take mod of n with string len
	RotateString(a, n);
	cout << a << endl;


	return 0;
}
















