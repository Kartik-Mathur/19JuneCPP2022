// PermutationOrNot.cpp
#include <iostream>
using namespace std;

bool isPermutation(char *a, char *b) {
	int freq[26] = {0};

	// print small abcd just for the reference
	char ch = 'a';
	while (ch <= 'z') {
		cout << ch << " ";

		ch = ch + 1;
	}
	cout << endl;

	// a string par iterate krke freq array
	// ko update karo
	for (int i = 0; a[i] != '\0'; ++i)
	{
		char ch = a[i];
		int indx = ch - 'a';
		freq[indx]++;
	}

	// for (int i = 0; i < 26; ++i)
	// {
	// 	cout << freq[i] << " ";
	// }
	// cout << endl;

	// b string par iterate krke freq array
	// ko decrease karo
	for (int i = 0; b[i] != '\0'; ++i)
	{
		char ch = b[i];
		int indx = ch - 'a';
		freq[indx]--;
	}

	// for (int i = 0; i < 26; ++i)
	// {
	// 	cout << freq[i] << " ";
	// }
	// cout << endl;

	for (int i = 0; i < 26; ++i)
	{
		if (freq[i] != 0) {
			return false;
		}
	}

	return true;
}

int main() {

	char a[] = "aabcdxyza";
	char b[] = "baxcyzad";

	if (isPermutation(a, b)) {
		cout << "Permutation Hai\n";
	}
	else {
		cout << "Permutation Nhi Hai\n";
	}


	return 0;
}
















