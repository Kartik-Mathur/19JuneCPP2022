// WineProblem.cpp
#include <iostream>
using namespace std;

// int WineProblem(int *wine, int l, int r, int day) {
// 	if (l > r) {
// 		return 0;
// 	}

// 	// Recursion
// 	int op1 = wine[l] * day + WineProblem(wine, l + 1, r, day + 1);
// 	int op2 = wine[r] * day + WineProblem(wine, l, r - 1, day + 1);

// 	return max(op1, op2);
// }


int WineProblem(int *wine, int l, int r, int day, int dp[][100]) {
	if (l > r) {
		return dp[l][r] = 0;
	}

	if (dp[l][r] != -1) {
		return dp[l][r];
	}
	// Recursion
	int op1 = wine[l] * day + WineProblem(wine, l + 1, r, day + 1, dp);
	int op2 = wine[r] * day + WineProblem(wine, l, r - 1, day + 1, dp);

	return dp[l][r] = max(op1, op2);
}

int bottomUp(int *price, int n) {
	int dp[1000][1000] = {0};
	for (int l = n - 1; l >= 0; --l)
	{
		for (int r = l; r < n; ++r)
		{
			int current_day = n - (r - l);
			if (l == r) {
				dp[l][r] = price[l] * current_day;
			}
			else {
				dp[l][r] = max(
				               price[l] * current_day + dp[l + 1][r],
				               price[r] * current_day + dp[l][r - 1]
				           );
			}
		}
	}

	for (int l = 0; l < n; ++l)
	{
		for (int r = 0; r < n; ++r)
		{
			cout << dp[l][r] << " ";
		}
		cout  << endl;
	}

	return dp[0][n - 1];
}

int main() {

	int wine[] = {2, 3, 5, 1, 4};
	int n = sizeof(wine) / sizeof(int);

	int dp[100][100];
	memset(dp, -1, sizeof dp);
	cout << bottomUp(wine, n) << endl;
	cout << WineProblem(wine, 0, n - 1, 1, dp) << endl;


	return 0;
}
















