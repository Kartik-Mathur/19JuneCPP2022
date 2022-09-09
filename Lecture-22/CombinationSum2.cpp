class Solution {
public:
	vector<vector<int>> ans;
	void solve(vector<int> &candidates, int target, int s, vector<int> &x) {
		// base case
		if (target == 0) {
			ans.push_back(x);
			return;
		}
		if (target < 0) {
			return;
		}
		// recursive case
		for (int i = s; i < candidates.size(); ++i)
		{
			if (i == s || candidates[i] != candidates[i - 1]) {
				x.push_back(candidates[i]);
				solve(candidates, target - candidates[i], i + 1, x);
				x.pop_back();
			}
		}
	}

	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		vector<int> x;
		sort(candidates.begin(), candidates.end());
		solve(candidates, target, 0, x);

		return ans;
	}
};