// https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/
class Solution {
public:
	int lengthOfLongestSubstringKDistinct(string &s, int k) {
		int ans, i, j, d, n;
		ans = i = j = d = 0;
		n = s.size();
		vector<int> freq(256, 0);

		while (j < n) {
			if (freq[s[j]] == 0) d++;
			freq[s[j]]++;
			while (d > k) {
				freq[s[i]]--;
				if (freq[s[i]] == 0) d--;
				i++;
			}
			ans = max(ans, j - i + 1);
			j++;
		}
		return ans;
	}
};