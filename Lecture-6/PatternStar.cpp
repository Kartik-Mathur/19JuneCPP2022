// PatternStar.cpp
#include <iostream>
using namespace std;

int main() {

	int n, i, row;
	cin >> n;
	for (row = 1 ; row <= n ; row++) {
		// Work
		// 1. print row times star
		for (i = 1; i <= row ; i++) {
			cout << '*';
		}
		// 2. print ' '
		cout << ' ';
		// 3. print n-row+1 times star
		for (i = 1 ; i <= n - row + 1 ; i++) {
			cout << '*';
		}
		// 4. print ' '
		cout << ' ';
		// 5. print n-row+1 times star
		for (i = 1 ; i <= n - row + 1 ; i++) {
			cout << '*';
		}
		// 6. print ' '
		cout << ' ';
		// 7. print row times star
		for (i = 1; i <= row ; i++) {
			cout << '*';
		}
		cout << endl;
	}


	return 0;
}
















