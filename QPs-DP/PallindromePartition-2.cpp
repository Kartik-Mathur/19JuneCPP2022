class Solution {
public:
	bool isPallindrome(string &x, int i, int j) {
		while (i < j) {
			if (x[i++] != x[j--]) return false;
		}
		return true;
	}
	int solve(string &s, int start, int end, vector<int> &dp) {
		// base case
		if (start >= end) {
			return dp[start] = 0;
		}
		if (dp[start] != -1) {
			return dp[start];
		}
		if (isPallindrome(s, start, end)) {
			return dp[start] = 0;
		}
		// recursive case
		int ans = INT_MAX;
		for (int i = start; i <= end; ++i)
		{
			if (isPallindrome(s, start, i)) {
				int choteKeCount = solve(s, i + 1, end, dp);
				ans = min(ans, 1 + choteKeCount);
			}
		}
		return dp[start] = ans;
	}

	int minCut(string s) {
		vector<int> dp(s.length() + 1, -1);

		return solve(s, 0, s.length() - 1, dp);
	}
};














