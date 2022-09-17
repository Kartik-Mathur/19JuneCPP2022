// Coins.cpp
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double solve(int head, int n, vector<double> &p,
             vector< vector<double> >& dp) {
	if (head == 0) return dp[head][n] = 1;
	if (n == 0) return dp[head][n] = 0; // head != 0
	if (dp[head][n] > -0.9) return dp[head][n];

	return dp[head][n] = p[n - 1] * solve(head - 1, n - 1, p, dp)
	                     + (1 - p[n - 1]) * solve(head, n - 1, p, dp);
}

int main() {
	int n;
	cin >> n;
	vector<double> p(n);
	vector< vector<double> > dp(3000, vector<double>(3000, -1));

	for (int i = 0; i < n; ++i)
	{
		cin >> p[i];
	}

	cout << setprecision(10) << solve((n + 1) / 2, n, p, dp);

	return 0;
}
















