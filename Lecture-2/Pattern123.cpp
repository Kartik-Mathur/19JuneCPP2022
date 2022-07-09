// Pattern123.cpp
// PatternStar.cpp
#include <iostream>
using namespace std;
/*
Print the following pattern: N = 4,
1
2 3
4 5 6
7 8 9 10
*/
int main() {
	int n, i;
	cin >> n;

	int row = 1, no = 1;

	while (row <= n) {
		// Work
		// har row mei, row times star print karne hai
		i = 1;
		while (i <= row) {
			cout << no << " ";
			no = no + 1;
			i = i + 1;
		}

		cout << '\n';
		row = row + 1;
	}


	return 0;
}
















