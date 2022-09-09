// CombinationSum.cpp
// https://leetcode.com/problems/combination-sum/
class Solution {
public:
	vector<vector<int> > ans;
	void solve(vector<int>& candidates, int target, int s, vector<int> &x) {
		// base case
		if (target == 0) {
			ans.push_back(x);
			return;
		}

		// recursive case
		for (int i = s ; i < candidates.size() ; i ++) {
			if (target >= candidates[i]) {
				x.push_back(candidates[i]);
				solve(candidates, target - candidates[i], i, x);
				x.pop_back();
			}
		}
	}

	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		vector<int> x;
		solve(candidates, target, 0, x);
		return ans;
	}
};