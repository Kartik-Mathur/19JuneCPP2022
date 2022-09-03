// Permutation.cpp
#include <iostream>
using namespace std;

void Permutation(char *a, int i) {
	// base case
	if (a[i] == '\0') {
		cout << a << endl;
		return;
	}

	// recursive case
	for (int j = i; a[j] != '\0'; ++j)
	{
		swap(a[j], a[i]);
		Permutation(a, i + 1);
		swap(a[j], a[i]);

	}
}

int main() {

	char a[] = "abc";

	Permutation(a, 0);


	return 0;
}
















