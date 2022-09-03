// NStairCase.cpp
#include <iostream>
using namespace std;

int NStairCase(int n) {
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}

	return NStairCase(n - 1) + NStairCase(n - 2) + NStairCase(n - 3);
}

int NStairs(int n, int k) {
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}
	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += NStairs(n - i, k);
	}
	return ans;
}

int main() {

	int n;
	cin >> n;
	cout << NStairCase(n) << endl;
	cout << NStairs(n, 3) << endl;

	return 0;
}
















