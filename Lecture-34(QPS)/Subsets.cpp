class Solution {
public:
	vector<vector<int>> x;

	void solve(vector<int>& a, int i, vector<int> &ans) {
		x.push_back(ans);

		if (i == a.size()) return;


		for (int j = i; j < a.size(); ++j)
		{
			if (j == i || a[j] != a[j - 1]) {
				ans.push_back(a[j]);
				solve(a, j + 1, ans);
				ans.pop_back();
			}
		}
	}

	vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		vector<int> ans;
		sort(nums.begin(), nums.end());
		solve(nums, 0, ans);
		return x;
	}
};