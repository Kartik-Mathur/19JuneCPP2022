// StringAppend.cpp
#include <iostream>
using namespace std;

int Length(char *a) {
	int cnt = 0;

	for (int i = 0; a[i] != '\0' ; ++i)
	{
		cnt++;
	}
	return cnt;
}

void append(char *a, char *b) {
	int lena = Length(a);
	int lenb = Length(b);

	int i = lena, j = 0;
	while (j <= lenb) {
		a[i++] = b[j++];
	}
}

int main() {

	char a[100] = "Hello";
	char b[100] = "World";

	cout << a << endl;
	cout << b << endl;
	append(a, b);
	cout << a << endl;
	cout << b << endl;

	return 0;
}
















