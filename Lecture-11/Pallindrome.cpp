// Pallindrome.cpp
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

bool isPallindrome(char *a) {
	int i = 0, j = Length(a) - 1;
	while (i < j) {
		if (a[i] != a[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main() {

	char a[] = "MADAM";

	if (isPallindrome(a)) {
		cout << "Pallindrome Hai\n";
	}
	else {
		cout << "Pallindrome Nhi Hai\n";
	}

	return 0;
}
















