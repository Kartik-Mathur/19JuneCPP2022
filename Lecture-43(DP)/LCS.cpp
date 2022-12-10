#include <iostream>
using namespace std;

int topDown(string &s1, string &s2, int n, int m, int dp[][100]) {
	// base case
	if (n == 0 || m == 0) {
		return dp[n][m] = 0;
	}
	if (dp[n][m] != -1) {
		return dp[n][m];
	}
	// recursive case
	if (s1[n - 1] == s2[m - 1]) {
		return dp[n][m] = 1 + topDown(s1, s2, n - 1, m - 1, dp);
	}
	else {
		return dp[n][m] = max(
		                      topDown(s1, s2, n, m - 1, dp),
		                      topDown(s1, s2, n - 1, m, dp)
		                  );
	}
}

int bottomUp(string &s1, string &s2) {
	int dp[100][100] = {0};
	int n = s1.length(), m = s2.length();

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	// for (int i = 0; i <= n; ++i)
	// {
	// 	for (int j = 0; j <= m; ++j)
	// 	{
	// 		cout << dp[i][j] << " ";
	// 	} cout << endl;
	// }

	// Finding LCS
	int k = dp[n][m];
	char a[100];
	a[k--] = '\0';

	int i = n, j = m;
	while (k >= 0) {
		if (s1[i - 1] == s2[j - 1]) {
			a[k] = s1[i - 1];
			k--;
			i--;
			j--;
		}
		else {
			if (dp[i - 1][j] >= dp[i][j - 1]) i--;
			else j--;
		}
	}
	cout << a << endl;

	return dp[n][m];
}



int main() {

	string s1 = "codding";
	string s2 = "cddoddnig";

	int dp[100][100];
	memset(dp, -1, sizeof dp);
	cout << bottomUp(s1, s2) << endl;
	cout << topDown(s1, s2, s1.length(), s2.length(), dp) << endl;

	return 0;
}
















