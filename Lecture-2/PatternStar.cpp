// PatternStar.cpp
#include <iostream>
using namespace std;
/*
Print the following pattern: N = 4,
*
* *
* * *
* * * *

*/
int main() {
	int n, i;
	cin >> n;

	int row = 1;

	while (row <= n) {
		// Work
		// har row mei, row times star print karne hai
		i = 1;
		while (i <= row) {
			cout << '*' << " ";
			i = i + 1;
		}

		cout << '\n';
		row = row + 1;
	}


	return 0;
}
















