// ReverseString.cpp
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

int main() {

	char a[] = "Hello World";
	int lena = Length(a);

	cout << a << endl;

	int i = 0, j = lena - 1;
	while (i < j) {
		swap(a[i], a[j]);
		i++;
		j--;
	}
	cout << a << endl;


	return 0;
}
















