#define vvc vector<vector<char>>
class Solution {
public:
	bool kyaWordMilla(vvc& a, string &word,
	                  int i, int j, int k, int n, int  m) {
		// base case
		if (k == word.size()) return true;
		// recursive case
		if (i < 0 || j < 0 || i >= n || j >= m ||
		        word[k] !=  a[i][j]) return false;

		char ch = a[i][j];
		a[i][j] = '.';
		int x[] = {1, 0, -1, 0};
		int y[] = {0, 1, 0, -1};

		for (int l = 0; l < 4; ++l)
		{
			int ni = i + x[l];
			int nj = j + y[l];
			bool kyaKaamHua  = kyaWordMilla(a, word, ni, nj, k + 1, n, m);
			if (kyaKaamHua) return true;
		}
		a[i][j] = ch;
		return false;
	}

	bool exist(vvc& board, string &word) {
		int n = board.size();
		int m = board[0].size();
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if (kyaWordMilla(board, word, i, j, 0, n, m)) {
					return true;
				}
			}
		}
		return false;
	}
};














