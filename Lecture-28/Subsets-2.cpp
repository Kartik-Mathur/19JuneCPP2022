// Subsets.cpp
class Solution {
public:
	vector<vector<int>> ans;
	void solve(vector<int> &nums, int i, vector<int> &x) {
		ans.push_back(x);
		if (i == nums.size()) {
			return;
		}

		for (int j = i; j < nums.size(); ++j)
		{
			if (i != j and nums[j] == nums[j - 1]) {
				continue;
			}
			else {
				x.push_back(nums[j]);
				solve(nums, j + 1, x);
				x.pop_back();
			}
		}
	}

	vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		vector<int> x;
		solve(nums, 0, x);
		return ans;
	}
};