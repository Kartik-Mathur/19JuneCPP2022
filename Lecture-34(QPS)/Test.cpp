class Solution {
public:

	int solve(int *freq) {

		int ans = 0;
		for (int i = 0; i < 26; ++i)
		{
			if (freq[i] > 0) {
				freq[i] --;
				ans += solve(freq) + 1;
				freq[i]++;
			}
		}
		return ans;
	}

	int numTilePossibilities(string a) {
		int freq[26] = {0};
		// prepare the freq array
		for (int i = 0; i < a.length(); ++i)
		{
			char ch = a[i];
			int indx = ch - 'A';
			freq[indx]++;
		}

		int ans = solve(freq);
		return ans;
	}
};