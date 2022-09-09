class Solution {
public:
	vector<vector<int>> ans;

	void solve(int s, vector<int> &v, int k, int n) {
		// base case
		if (k == 0) {
			ans.push_back(v);
			return;
		}
		// recursive case
		for (int i = s; i <= n; ++i)
		{
			v.push_back(i);
			solve(i + 1, v, k - 1, n);
			v.pop_back();
		}
	}

	vector<vector<int>> combine(int n, int k) {
		vector<int> v;
		solve(1, v, k, n);
		return ans;
	}
};