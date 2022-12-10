// CoinExchange.cpp
#include <iostream>
#include <vector>
using namespace std;

int CoinExchange(int amount, int *deno, int n, int *dp) {
	// base case
	if (amount == 0) {
		return dp[amount] = 0;
	}

	if (dp[amount] != -1) {
		return dp[amount];
	}

	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)// amt = 5, deno[] = {10,20,30};
	{
		if (amount >= deno[i]) {
			int chotiAmount = amount - deno[i];
			int chotiAmountCoins = CoinExchange(chotiAmount, deno, n, dp);
			if (chotiAmountCoins != INT_MAX) {
				ans = min(chotiAmountCoins + 1, ans);
			}
		}
	}

	return dp[amount] = ans;
}

int bottomUp(int *deno, int n, int amt) {
	vector<int> dp(amt + 1, INT_MAX);
	dp[0] = 0;

	for (int rupay = 1; rupay <= amt; ++rupay)
	{
		for (int j = 0; j < n; ++j)
		{
			if (rupay >= deno[j]) {
				int kamRupay = rupay - deno[j];
				dp[rupay] = min(
				                dp[rupay],
				                dp[kamRupay] + 1
				            );
			}
		}
	}

	for (int rupay = 0; rupay <= amt; ++rupay)
	{
		cout << dp[rupay] << " ";
	}
	cout << endl;
	return dp[amt];
}


int main() {

	int deno[] = {1, 5, 7};
	int n = sizeof(deno) / sizeof(int);

	int dp[10000];
	memset(dp, -1, sizeof dp);
	cout << bottomUp(deno, n, 15) << endl;
	cout << CoinExchange(15, deno, n, dp) << endl;

	return 0;
}
















