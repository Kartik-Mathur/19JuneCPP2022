#include <iostream>
using namespace std;

int findDigitSum(int x) {
	int ans = 0;
	while (x > 0) {
		ans += x % 10;
		x /= 10;
	}
	return ans;
}

int main() {

	int n = 30;

	// cin >> n;
	int cnt = 0;

	for (int i = 2; i <= n; i ++)
	{
		int digit_sum = findDigitSum(i);
		if (digit_sum % 2 == 0) {
			cnt++;
		}
	}

	cout << cnt << endl;


	return 0;
}
















