// SortStrings.cpp
#include <iostream>
#include <cstring>
#include <algorithm> // sort
using namespace std;

bool meraCompare(string a, string b) {
	// cout << "Comparing: " << a << ", " << b << endl;
	if (a.length() == b.length()) return a < b;
	return a.length() < b.length();
}

int main() {

	string s[100] = {
		"pineapple",
		"apple",
		"kiwi",
		"tivi",
		"fivi",
		"jivi",
		"papaya",
		"orange",
		"mango"
	};
	int n = 9;
	for (int i = 0; i < n; ++i)
	{
		cout << s[i] << "\n";
	}
	cout << "After Sorting: " << endl;
	sort(s, s + n, meraCompare);

	for (int i = 0; i < n; ++i)
	{
		cout << s[i] << "\n";
	}

	/*
		int a[] = {1, 2, 3, 4, 0};
		int n = sizeof(a) / sizeof(int);

		for (int i = 0; i < n; ++i)
		{
			cout << a[i] << " ";
		}
		cout << endl;

		sort(a, a + n, meraCompare);

		for (int i = 0; i < n; ++i)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	*/


	return 0;
}
















