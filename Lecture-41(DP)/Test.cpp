#include <iostream>
using namespace std;

int fiboRecursion(int n) {// O(2^N)
	if (n <= 1) return n;

	return fiboRecursion(n - 1) + fiboRecursion(n - 2);
}

int fibo(int n, int *dp) { // O(N)
	if (n <= 1) {
		dp[n] = n;
		return n;
	}

	if (dp[n] != -1) {
		return dp[n];
	}

	int ans = fibo(n - 1, dp) + fibo(n - 2, dp);
	dp[n] = ans;
	return ans;
}

int bottomUp(int n) {
	int* dp = new int[n + 1];
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	for (int i = 0; i <= n; ++i)
	{
		cout  << dp[i] << " ";
	}
	cout << endl;
	return dp[n];
}

int main() {
	int dp[10000];
	for (int i = 0; i < 10000; ++i)
	{
		dp[i] = -1;
	}

	cout << fibo(10, dp) << endl;
	for (int i = 0; i < 11; ++i)
	{
		cout  << dp[i] << " ";
	}
	cout << endl;
	cout << bottomUp(10) << endl;
	// cout << fiboRecursion(100) << endl;

	return 0;
}
















