// Knapsack.cpp
#include <iostream>
using namespace std;

int topDown(int *price, int *wt, int capacity, int n, int dp[][100]) {
	// base case
	if (capacity == 0 || n == 0) {
		return dp[n][capacity] = 0;
	}
	if (dp[n][capacity] != -1) {
		return dp[n][capacity];
	}
	// recursive case
	int op1, op2;
	op1 = op2 = INT_MIN;

	if (capacity >= wt[n - 1]) {
		op1 = price[n - 1 ] + topDown(price, wt, capacity - wt[n - 1], n - 1);
	}
	op2 = topDown(price, wt, capacity, n - 1);
	return dp[n][capacity] = max(op2, op1);
}

int bottomUp(int *price, int *wt, int N, int capacity) {
	int dp[100][100] = {0};
	for (int n = 1; n <= N; ++n)
	{
		for (int cap = 1; cap <= capacity; ++cap)
		{
			int op1, op2;
			op1 = op2 = INT_MIN;
			if (cap >= wt[n - 1]) {
				op1 = price[n - 1]  + dp[n - 1][cap - wt[n - 1]];
			}
			op2  = 0 + dp[n - 1][cap];
			dp[n][cap] = max(op1, op2);
		}
	}

	for (int n = 0; n <= N; ++n)
	{
		for (int cap = 0; cap <= capacity; ++cap)
		{
			cout << dp[n][cap] << " ";
		}
		cout << endl;
	}

	return dp[N][capacity];
}

int main() {

	int price[] = {7, 4, 4};
	int wt[] = {3, 2, 2};

	int capacity = 4;

	cout << topDown(price, wt, capacity, 3) << endl;
	cout << bottomUp(price, wt, 3, capacity) << endl;
	return 0;
}
















