// UniqueNumber - 1.cpp
#include <iostream>
using namespace std;

int main() {

	int n, no, i;
	cin >> n;
	int ans = 0;
	i = 1;
	while (i <= n) {
		cin >> no;
		// cout << no << endl;
		ans = ans ^ no;

		i++;
	}

	cout << "Unique Number: " << ans << endl;


	return 0;
}

















