// ReverseNumber.cpp
#include <iostream>
using namespace std;

int main() {
	int n, ans = 0, digit;
	cin >> n;
	for (; n != 0; n /= 10)
	{
		digit = n % 10;
		ans = ans * 10 + digit;
	}
	// while (n != 0) {
	// 	digit = n % 10;
	// 	ans = ans * 10 + digit;

	// 	n /= 10;
	// }
	cout << "Reverse Number: " << ans << endl;
	cout << ans + 10 << endl;


	/// PRINT THE REVERSE

	// int n;
	// cin >> n;
	// for ( ; n != 0; n = n / 10)
	// {
	// 	cout << n % 10;
	// }
	// while (n != 0) {
	// 	cout << n % 10;

	// 	n /= 10;
	// }
	cout << endl;


	return 0;
}
















