// Subsets.cpp
class Solution {
public:
	vector<vector<int>> ans;
	void solve(vector<int> &nums, int i, vector<int> &x) {
		// base case
		if (i == nums.size()) {
			ans.push_back(x);
			return;
		}
		// recursive case
		// pehla case include mat karo inside x
		solve(nums, i + 1, x);
		// doosra case, include karlo inside x
		x.push_back(nums[i]);
		solve(nums, i + 1, x);
		x.pop_back();
	}

	vector<vector<int>> subsets(vector<int>& nums) {
		vector<int> x;
		solve(nums, 0, x);
		return ans;
	}
};