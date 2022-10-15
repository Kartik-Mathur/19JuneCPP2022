#define vvi vector<vector<int>>
#define vi vector<int>
class Solution {
public:
	vvi ans;

	void solve(vi& nums, int i) {
		if (i == nums.size()) {
			ans.push_back(nums);
			return;
		}

		for (int j = i; j < nums.size(); ++j)
		{
			swap(nums[i], nums[j]);
			solve(nums, i + 1);
			swap(nums[i], nums[j]);
		}
	}

	vvi permute(vi& nums) {
		solve(nums, 0);

		return ans;
	}
};